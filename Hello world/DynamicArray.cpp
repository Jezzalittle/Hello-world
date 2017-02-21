
#include "DynamicArray.h"



DynamicArray::~DynamicArray()
{
	delete this;
}

DynamicArray::DynamicArray(int arraySize)
{
	outputArr = NULL;
	outputArr = new int[arraySize];
}
DynamicArray::DynamicArray(int* arrPointer, int value)
{
	addValue(arrPointer, value);


}

int* DynamicArray::getArray()
{
	return outputArr;
}

void DynamicArray::addValue(int* arrPointer, int value)
{
	int* temp = NULL;
	temp = new int[value];
	
	int length;

	length = extent<decltype(*arrPointer)>::value;

	
	for (int i = 0; i < length; i++)
	{
		temp[i] = arrPointer[i];
	}



	arrPointer = NULL;
	arrPointer = new int[length + 1];

	for (int i = 0; i < length + 1; i++)
	{
		arrPointer[i] = temp[i];
		if (i == length)
		{
			arrPointer[i + 1] = value;
		}
	}

}