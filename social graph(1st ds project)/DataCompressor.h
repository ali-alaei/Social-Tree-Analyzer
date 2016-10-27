#ifndef DATACOMPRESSOR_H
#define DATACOMPRESSOR_H
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include"Graph.h"

typedef unsigned short int usi;

class DataCompressor
{
public:
	void init(usi,usi,usi);
	Graph getCompressData();
	void dataToList();
	
	DataCompressor();
	~DataCompressor();
private:
	Graph graph;

};
#endif

