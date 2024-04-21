#pragma once

class Array
{
	int _size;
	int _capacity;
	int* _array;
public:
	Array();
	Array(int);
	~Array();
	void fillArray();
	void addElement(int);
	void printArray();
	void editSize(int);
	int minInArr();
	int maxInArr();
	void sortArr();
	Array(const Array&);
	Array(Array&&);
};

