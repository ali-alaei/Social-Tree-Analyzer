#include<assert.h>
#ifndef EDGEVECTOR_H
#define EDGEVECTOR_H 
typedef unsigned int ui;
#define extraSize 10
template <class T>

class EdgeVector
{
public:
	EdgeVector()
	{
		this->size = 0;
		this->maxSize = 0;
		array = nullptr;
	}
	~EdgeVector()
	{


	}
	ui getSize()
	{
		return this->size;
	}
	void add(T value)
	{
		if (size  == maxSize)
		{
			expand();
		}
		array[size++] = value;
	}

	T getVector(ui index)
	{
		assert(index >=0);
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
	ui size;
	ui maxSize;
};

#endif