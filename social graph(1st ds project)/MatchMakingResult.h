#ifndef MATCHMAKINGRESULT_H
#define MATCHMAKINGRESULT_H 
#include"edgeVector.h"
#include"Node.h"
#include"Edge.h"
class MatchMakingResult
{
	//Vector<Node> nodes;
public:
	EdgeVector<Edge> edges;
	void print(MatchMakingResult& return_compressed_data);
};
	
#endif
