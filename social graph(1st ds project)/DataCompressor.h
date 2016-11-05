#ifndef DATACOMPRESSOR_H
#define DATACOMPRESSOR_H
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include"CompressedData.h"

typedef unsigned short int usi;

class DataCompressor
{
public:
	void dataToList(usi,usi,usi);
	void getCompressData(CompressedData& return_compressed_data);
	void init(std::string entry_file);
	void printCompressedData();
	DataCompressor();
	~DataCompressor();
private:
	CompressedData graph;
	Edge newEdge;

};
#endif

