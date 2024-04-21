#include "Array.h"
#include <iostream>
using namespace std;

Array::Array() :Array(1) {}

Array::Array(int capacity)
{
	_size = 0;
	_capacity = capacity;
	_array = new int[_capacity];
}

Array::~Array()
{
	delete[] _array;
}

void Array::fillArray()
{
	for (int i = 0; i < _capacity; i++)
	{
		cout << "Enter the data of el:" << i + 1 << endl;
		cin >> _array[i];
		_size++;
	}
}

void Array::addElement(int el)
{
	if (_size != _capacity)
	{
		_array[_size] = el;
	}
}

void Array::printArray()
{
	if (_array != nullptr)
	{
		for (int i = 0; i < _size; i++)
		{
			cout << "el: " << i + 1 << " = " << _array[i] << endl;
		}
	}
	else
		cout << "Array is ampty!" << endl;
}

void Array::editSize(int capacity)
{
	if (_capacity < capacity)
	{
		int* newArr = new int[capacity];
		for (int i = 0; i < _size; i++)
		{
			newArr[i] = _array[i];
		}
		_capacity = capacity;
		delete[] _array;
		_array = newArr;
	}
}

int Array::minInArr()
{
	int minVal = _array[0];
	for (int i = 1; i < _size; i++)
	{
		if (minVal>_array[i])
		{
			minVal = _array[i];
		}
	}
	return minVal;
}

int Array::maxInArr()
{
	int maxVal = _array[0];
	for (int i = 1; i < _size; i++)
	{
		if (maxVal < _array[i])
		{
			maxVal = _array[i];
		}
	}
	return maxVal;
}

void Array::sortArr()
{
	for (int i = 0; i < _size - 1; i++) {
		for (int j = 0; j < _size - i - 1; j++) {
			if (_array[j] > _array[j + 1]) {
				int temp = _array[j];
				_array[j] = _array[j + 1];
				_array[j + 1] = temp;
			}
		}
	}
}

Array::Array(const Array& array)
{
	_capacity = array._capacity;
	_array = new int[_capacity];
	_size = array._size;
	for (int i = 0; i < _size; i++)
	{
		_array[i] = array._array[i];
	}
}

Array::Array(Array&& array)
{
	_array = array._array;
	_size = array._size;
	_capacity = array._capacity;

	array._array = nullptr;
	array._size = 0;
}
