#pragma once
#include <iostream>
#include "clsMyQueue.h"
using namespace std;

template <class type>
class clsMyStack : public clsMyQueue<type>
{
public:
    void push(const type& value)
    {
        clsMyQueue <type>::_list.InsertAtBeginning(value);
    }

    void print() const
    {
        cout << "Top => ";

        for (typename clsDblLinkedList<type>::node* h = this->_list.head; h != nullptr; h = h->next)
        {
            cout << h->value;
            if (h->next) cout << " => ";
        }

        cout << " => Bottom" << endl;
    }

    type top() const
    {
        return clsMyQueue <type>::front();
    }

    type bottom() const
    {
        return clsMyQueue <type>::back();
    }


};

