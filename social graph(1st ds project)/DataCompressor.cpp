#include"DataCompressor.h"
DataCompressor::DataCompressor()
{
}

DataCompressor::~DataCompressor()
{
}

void DataCompressor::dataToList()
{
	std::ifstream data("data.txt");
	if (!data)
	{
		std::cerr << "oops file didn't open correctly"<<std::endl;
		exit(1);
	}


}
