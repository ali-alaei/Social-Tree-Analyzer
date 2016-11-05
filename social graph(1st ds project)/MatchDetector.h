#ifndef MATCHDETECTOR_H
#define MATCHDETECTOR_H
#include"MatchMakingResult.h"
#include "CompressedData.h"
class MatchDetector
{
public:
	
	void getCompressData(const CompressedData& returnCompressedData, MatchMakingResult& return_result)
	{
		for (int i = 0; i < returnCompressedData.edges.getSize(); i++){
			if (returnCompressedData.edges.getVector(i).timeSize() > 1){
				return_result.edges.add(returnCompressedData.edges.getVector(i));
			}
		}
	}
	MatchDetector::MatchDetector()
	{
	}

	MatchDetector::~MatchDetector()
	{
	}
private:

};
#endif
