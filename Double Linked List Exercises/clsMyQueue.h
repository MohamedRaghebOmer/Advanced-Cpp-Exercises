#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class type>
class clsMyQueue
{
protected:
    clsDblLinkedList<type> _list;

public:

    void push(const type& value)
    {
        _list.InsertAtEnd(value);
    }

    void print() const
    {
        typename clsDblLinkedList<type>::node* h = _list.head;
        cout << "Front -> ";
        while (h != nullptr)
        {
            cout << h->value;
            if (h->next != nullptr) cout << " => ";
            h = h->next;
        }
        cout << " -> nullptr" << endl;
    }

    int size() const
    {
        return _list.size();
    }

    bool IsEmpty() const
    {
        return size() == 0;
    }

    type front() const
    {
        return _list.GetItem(0);
    }

    type back() const
    {
        return _list.GetItem(size() - 1);
    }

    type pop()
    {
        type value = front();
        _list.DeleteFirstNode();
        return value;
    }

    bool front(type& outValue) const
    {
        if (IsEmpty()) return false;
        outValue = _list.GetItem(0);
        return true;
    }

    bool back(type& outValue) const
    {
        if (IsEmpty()) return false;
        outValue = _list.GetItem(size() - 1);
        return true;
    }

    bool pop(type& outValue)
    {
        if (IsEmpty()) return false;

        outValue = _list.GetItem(0);
        _list.DeleteFirstNode();
        return true;
    }

    type GetItem(int index) const
    {
        return _list.GetItem(index);
    }

    bool reverse()
    {
        return _list.reverse();
    }

    bool UpdateItem(int indext, const type& newValue)
    {
        return _list.UpdateItem(indext, newValue);
    }

    bool InsertAfter(int prevNode, const type& value)
    {
        return _list.InsertAfter(prevNode, value);
    }

    void InsertAtFront(const type& value)
    {
        _list.InsertAtBeginning(value);
    }

    void InsertAtBack(const type& value)
    {
        push(value);
    }


};
