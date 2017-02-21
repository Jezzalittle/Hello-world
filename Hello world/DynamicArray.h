#pragma once


#include <type_traits>
#include <iostream>


using namespace std;


class DynamicArray 
{

private:
	int* outputArr;
public:

	DynamicArray();
	~DynamicArray();
	DynamicArray(int arraySize);
	DynamicArray(int* arrPointer, int value);
	void addValue(int* arrPointer, int value);

	int* getArray();

};