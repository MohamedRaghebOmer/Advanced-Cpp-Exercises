#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

template <class type> class clsMyQueue
{
protected:
	clsDblLinkedList <type> _list;

public:
	void push(type value)
	{
		_list.InsertAtEnd(value);
	}

    void print()
    {
        typename clsDblLinkedList<type>::node* h = _list.head;

        while (h != nullptr)
        {
            if (h->next != nullptr)
                cout << h->value << " => ";
            else
                cout << h->value;

            h = h->next;
        }
        cout << " => nullptr" << endl;
    }

    int size()
    {
        return _list.size();
    }

    type front()
    {
        return _list.GetItem(0);
    }

    type back()
    {
        return _list.GetItem(size() - 1);
    }

    void pop()
    {
        _list.DeleteFirstNode();
    }

    bool IsEmpty()
    {
        return size() == 0;
    }


};

