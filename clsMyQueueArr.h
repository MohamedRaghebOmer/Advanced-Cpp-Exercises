#pragma once

#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

template <class T>
class clsMyQueueArr
{

protected:
	clsMyDynamicArray <T> _MyList;

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void pop()
	{
		_MyList.DeleteFirstItem();
	}

	void Print()
	{
		_MyList.print();
	}

	int Size()
	{
		return _MyList.size();
	}

	bool IsEmpty()
	{
		return _MyList.isEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return _MyList.GetItem(Index);

	}

	void Reverse()
	{

		_MyList.reverse();

	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyList.SetItem(Index, NewValue);

	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyList.InsertAfter(Index, NewValue);
	}


	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value);

	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);


	}


	void Clear()
	{
		_MyList.clear();
	}



};


