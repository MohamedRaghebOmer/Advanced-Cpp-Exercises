#pragma once
#include <iostream>
using namespace std;

template <class type>
class clsMyDynamicArray
{
private:
	type* _array;

protected:
	int _size = 0;

public:

	clsMyDynamicArray(int size = 0)
	{
		if (size <= 0)
			_size = 0;
		
		_size = size;

		if (_size > 0)
			_array = new type[_size];
		else
			_array = nullptr;
	}

	~clsMyDynamicArray()
	{
		delete[] _array;
	}

	bool SetItem(int index, const type& value)
	{
		if (index >= _size || index < 0) return false;
		
		_array[index] = value;
		return true;
	}

	bool isEmpty()
	{
		return _size == 0;
	}

	int size()
	{
		return _size;
	}

	void print()
	{
		for (int i = 0; i < _size; i++)
			cout << _array[i] << " ";
		cout << endl;
	}

	bool resize(int newSize)
	{
		if (newSize == _size)
			return true;

		if (newSize <= 0)
		{
			delete[] _array;
			_array = nullptr;
			_size = 0;
			return true;
		}

		if (newSize > _size)
		{
			_size = newSize;
			return true;
		}

		type* tempArr = new type[newSize];
		for (int i = 0; i < newSize; i++)
			tempArr[i] = _array[i];

		_size = newSize;
		delete[] _array;
		_array = tempArr;

		return true;
	}
	

};

