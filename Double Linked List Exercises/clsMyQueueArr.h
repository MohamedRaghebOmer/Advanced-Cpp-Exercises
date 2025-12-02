#pragma once
#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

template <class type>
class clsMyQueueArr
{

protected:
	clsMyDynamicArray <type> _array;

public:

	void push(const type& Item)
	{
		_array.InsertAtEnd(Item);
	}

	type pop()
	{
		type first = _array.GetItem(0);
		_array.DeleteFirstItem();
		return first;
	}

	void print()
	{
		_array.print();
	}

	int size()
	{
		return _array.size();
	}

	bool IsEmpty()
	{
		return _array.isEmpty();
	}

	type front()
	{
		return _array.GetItem(0);
	}

	type back()
	{
		return _array.GetItem(size() - 1);
	}

	type GetItem(int Index)
	{
		return _array.GetItem(Index);

	}

	void reverse()
	{
		_array.reverse();
	}

	void UpdateItem(int Index, const type& NewValue)
	{
		_array.SetItem(Index, NewValue);
	}

	void InsertAfter(int Index, const type& NewValue)
	{
		_array.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(const type& Value)
	{
		_array.InsertAtBeginning(Value);
	}

	void InsertAtBack(const type& Value)
	{
		_array.InsertAtEnd(Value);
	}

	void clear()
	{
		_array.clear();
	}
};


