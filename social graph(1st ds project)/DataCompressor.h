#ifndef DATACOMPRESSOR_H
#define DATACOMPRESSOR_H
#include"Edge.h"
#include"Node.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
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
#endif

