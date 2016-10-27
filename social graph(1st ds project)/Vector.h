#ifndef VECTOR_H
#define VECTOR_H 
template <class T>
class Vector
{
public:
	Vector()
	{
		this->iterator = 0;
		this->maxSize = 1000;
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
		array[iterator] = value;
		this->iterator++;
		this->size++;
		if ((size + 1) == maxSize)
		{
			expand();
		}


	}
	T getVector(int index)
	{
		return this->array[index];
	}
private:
	void expand()
	{
		tempArray = new T[(maxSize += 1000)];
		for (int i = 0; i < this->size; i++)
		{
			tempArray[i] = array[i];
		}
		delete array;
		array = tempArray;
	}
	T* tempArray;
	T* array;
	int size;
	int maxSize;
	int iterator;
};

#endif