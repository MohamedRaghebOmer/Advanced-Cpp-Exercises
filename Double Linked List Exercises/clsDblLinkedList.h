#pragma once
#include <iostream>
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

    void PrintList()
    {
        node* h = head;
        while (h != nullptr)
        {
            cout << h->value << "  ";
            h = h->next;
        }
        cout << endl;
    }

    node* find(const type& target)
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
            // insert at beginning if prevNode is null
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
            return;
        }

        node* h = head;
        while (h->next != nullptr)
            h = h->next;

        h->prev->next = nullptr;
        delete h;

        _size--;
    }

    int size()
    {
        return _size;
    }

    bool isEmpty()
    {
        return _size == 0;
    }

    void clear()
    {
        while (_size > 0)
            DeleteFirstNode();
    }

    void reverse()
    {
        if (head == nullptr)
            return;

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

        if (temp != nullptr)
            head = temp->prev;

    }


};
