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
	
	type GetItem(int index)
	{
		return _array[index];
	}

	void reverse()
	{
		if (_size <= 1) return;
		if (!_array) return;

		int i = 0, j = _size - 1;
		
		while (i < j)
		{
			type temp = _array[i];
			_array[i] = _array[j];
			_array[j] = temp;

			i++;
			j--;
		}
	}

	void clear()
	{
		delete[] _array;
		_array = nullptr;
		_size = 0;
	}

	bool DeleteItemAt(int index)
	{
		if (index < 0 || index >= _size) return false;

		type* temp = new type[_size - 1];
		int j = 0;

		for (int i = 0; i < _size; i++)
		{
			if (i != index)
			{
				temp[j] = _array[i];
				j++;
			}
		}

		delete[] _array;
		_array = temp;
		_size--;

		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{
		DeleteItemAt(_size - 1);
	}

	int find(const type& value)
	{
		for (int i = 0; i < _size; i++)
		{
			if (_array[i] == value)
				return i;
		}

		return -1;
	}

	bool DeleteItem(const type& value)
	{
		return DeleteItemAt(find(value));
	}

	bool InsertAt(int index, const type& value)
	{
		if (index < 0 || index > _size) return false;

		type* temp = new type[_size + 1];

		for (int i = 0; i < index; i++)
			temp[i] = _array[i];

		temp[index] = value;

		for (int i = index; i < _size; i++)
			temp[i + 1] = _array[i];

		delete[] _array;
		_array = temp;
		_size++;

		return true;
	}


};

