#include"DataCompressor.h"
DataCompressor::DataCompressor()
{
}

DataCompressor::~DataCompressor()
{
}

void DataCompressor::dataToList()
{
	unsigned short int firstVAlue, secondValue, thirdValue;
	std::ifstream data("data.txt");
	if (!data)
	{
		std::cerr << "oops file didn't open correctly" << std::endl;
		exit(1);
	}
	while (data >> firstVAlue >> secondValue >> thirdValue)
	{
		init(firstVAlue, secondValue, thirdValue);
	}

}
void DataCompressor::init(unsigned short int firstValue, unsigned short int secondValue, unsigned short int thirdValue)
{



}