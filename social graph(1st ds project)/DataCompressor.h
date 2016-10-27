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
	void init(unsigned short int, unsigned short int, unsigned short int);
	std::string getCompressData();
	void dataToList();
	
	DataCompressor();
	~DataCompressor();
private:
	Edge edge;
	Node node;

};
#endif

