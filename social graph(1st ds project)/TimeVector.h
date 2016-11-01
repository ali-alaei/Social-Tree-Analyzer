#include<assert.h>
#include <iostream>
#ifndef TIMEVECTOR_H
#define TIMEVECTOR_H 
#define extraSize 10
typedef unsigned short int usi;
template <class T>
class TimeVector
{
public:
	TimeVector()
	{
		this->size = 0;
		this->maxSize = 0;
		array = nullptr;
	}
	~TimeVector()
	{


	}
	usi getSize()
	{
		return this->size;
	}
	void add(T value)
	{
		if (size == maxSize)
		{
			expand();
		}
		array[size++] = value;
		//std::cout << "time " << value << " added" << "\n";
		


	}

	T getVector(usi index)
	{
		assert(index >= 0);
		assert(index < size);
		return this->array[index];
	}
private:
	void expand()
	{
		//std::cout << "vector expand" << std::endl;
		maxSize += extraSize;
		T* tempArray = new T[maxSize];
		for (int i = 0; i < this->size; i++)
		{
			tempArray[i] = array[i];
		}
		delete[] array;
		array = tempArray;

		//array = new T(tempArray);
	}
	T* array;
	usi size;
	usi maxSize;
};

#endif