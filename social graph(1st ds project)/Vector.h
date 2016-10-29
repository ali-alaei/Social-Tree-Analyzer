#include<assert.h>
#ifndef VECTOR_H
#define VECTOR_H 
template <class T>

class Vector
{
public:
	Vector()
	{
		this->size = 0;
		this->maxSize = 10000;
		array = new T[maxSize];
	}
	~Vector()
	{


	}
	int getSize()
	{
		return this->size;
	}
	void add(T value)
	{
		array[size++] = value;
		if (size  == maxSize)
		{
			expand();
		}
	}

	T& getVector(int index)
	{
		assert(index >=0);
		assert(index < size);
		return this->array[index];
	}
private:
	void expand()
	{
		//std::cout << "vector expand" << std::endl;
		maxSize += 10000;
		tempArray = new T[maxSize];
		for (int i = 0; i < this->size; i++)
		{
			tempArray[i] = array[i];
		}
		delete[] array;
		array = tempArray;
		//array = new T(tempArray);
	}
	T* tempArray;
	T* array;
	int size;
	int maxSize;
};

#endif