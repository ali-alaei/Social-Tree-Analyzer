#include"Edge.h"
#include"Node.h"
#include<string>
class DataCompressor
{
public:
	void init();
	std::string getCompressData();
	void dataToList();
	
	DataCompressor();
	~DataCompressor();
private:
	Edge edge;
	Node node;


	

};

DataCompressor::DataCompressor()
{
}

DataCompressor::~DataCompressor()
{
}