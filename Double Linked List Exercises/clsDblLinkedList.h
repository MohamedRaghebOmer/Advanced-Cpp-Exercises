#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

template <class type> class clsDblLinkedList
{
protected:
    int _size = 0;

public:
    struct node
    {
        type value;
        node* next = nullptr;
        node* prev = nullptr;
    };
    node* head = nullptr;

    // constructor / destructor (optional but nice)
    clsDblLinkedList() : _size(0), head(nullptr) {}
    ~clsDblLinkedList() { clear(); }

    void InsertAtBeginning(const type& value)
    {
        node* newNode = new node;
        newNode->value = value;
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr)
            head->prev = newNode;

        head = newNode;
        _size++;
    }

    void PrintList() const
    {
        node* h = head;

        cout << "nullptr <= ";
        while (h != nullptr)
        {
            if (h->next != nullptr)
                cout << h->value << " <=> ";
            else
                cout << h->value;

            h = h->next;
        }
        cout << " => nullptr" << endl;
    }

    node* find(const type& target) const
    {
        node* h = head;
        while (h != nullptr)
        {
            if (h->value == target)
                return h;
            h = h->next;
        }
        return nullptr;
    }

    void InsertAfter(node* prevNode, const type& value)
    {
        if (prevNode == nullptr)
        {
            InsertAtBeginning(value);
            return;
        }

        node* newNode = new node;
        newNode->value = value;
        newNode->next = prevNode->next;
        newNode->prev = prevNode;
        prevNode->next = newNode;

        if (newNode->next != nullptr)
            newNode->next->prev = newNode;

        _size++;
    }

    void InsertAtEnd(const type& value)
    {
        node* newNode = new node;
        newNode->value = value;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            _size++;
            return;
        }

        node* h = head;
        while (h->next != nullptr)
            h = h->next;

        newNode->prev = h;
        h->next = newNode;

        _size++;
    }

    void DeleteNode(node* target)
    {
        if (head == nullptr || target == nullptr)
            return;

        if (target == head)
        {
            head = target->next;
            if (head != nullptr)
                head->prev = nullptr;
            delete target;
            _size--;
            return;
        }

        if (target->prev != nullptr)
            target->prev->next = target->next;

        if (target->next != nullptr)
            target->next->prev = target->prev;

        delete target;
        _size--;
    }

    void DeleteFirstNode()
    {
        if (head == nullptr)
            return;

        node* temp = head;
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete temp;

        _size--;
    }

    void DeleteLastNode()
    {
        if (head == nullptr)
            return;

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            _size--;
            return;
        }

        node* h = head;
        while (h->next != nullptr)
            h = h->next;

        h->prev->next = nullptr;
        delete h;

        _size--;
    }

    int size() const
    {
        return _size;
    }

    bool isEmpty() const
    {
        return _size == 0;
    }

    void clear()
    {
        while (_size > 0)
            DeleteFirstNode();
    }

    bool reverse()
    {
        if (head == nullptr)
            return false;

        node* current = head;
        node* temp = nullptr;

        while (current != nullptr)
        {
            // swap next and prev
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            current = current->prev;
        }

        // set new head
        if (temp != nullptr)
            head = temp->prev;

        return true;
    }

    node* GetNode(int index) const
    {
        if (index < 0 || index >= _size || head == nullptr)
            return nullptr;

        node* current = head;
        while (index > 0 && current != nullptr)
        {
            current = current->next;
            index--;
        }

        return current;
    }

    type GetItem(int index) const
    {
        node* ItemNode = GetNode(index);

        if (ItemNode == nullptr)
            throw out_of_range("GetItem: index out of range");

        return ItemNode->value;
    }

    bool GetItem(int index, type& outValue) const
    {
        node* ItemNode = GetNode(index);

        if (ItemNode == nullptr)
            return false;

        outValue = ItemNode->value;
        return true;
    }

    bool UpdateItem(int index, const type& newValue)
    {
        if (index < 0 || index >= _size)
            return false;

        node* item = GetNode(index);
        if (item == nullptr)
            return false;

        item->value = newValue;
        return true;
    }

    bool InsertAfter(int index, const type& value)
    {
        if (index < 0 || index >= _size)
            return false;

        node* n = GetNode(index);
        if (n == nullptr)
            return false;

        InsertAfter(n, value);
        return true;
    }


};
