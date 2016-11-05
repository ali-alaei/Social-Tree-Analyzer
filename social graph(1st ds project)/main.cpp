#include <iostream>
#include"DataCompressor.h"
#include"CompressedData.h"
#include"MatchDetector.h"
#include"MatchMakingResult.h"
using namespace std;
int main() 
{
	//MatchDetector matchDetector;
	CompressedData compressedData;
	DataCompressor compressor;
	MatchDetector matchDetecor;
	MatchMakingResult matchMakingResult;
	compressor.init("little3.txt");
	compressor.getCompressData(compressedData);
	compressedData.print();
	matchDetecor.getCompressData(compressedData, matchMakingResult);
	matchMakingResult.print(matchMakingResult);
	compressedData.print();
	system("pause");
    return 0;
}
