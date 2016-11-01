#include <iostream>
#include"DataCompressor.h"
using namespace std;
int main() 
{
	Graph compressedData;
	DataCompressor compressor;
	compressor.init("bgdata2.txt");
	compressor.getCompressData(compressedData);
	//compressedData.print();
	system("pause");
    return 0;
}
