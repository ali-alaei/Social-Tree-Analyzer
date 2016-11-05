#ifndef COMPRESSEDDATA_H
#define COMPRESSEDDATA_H 
#include"edgeVector.h"
#include"Node.h"
#include"Edge.h"
class CompressedData
{
	friend class MatchDetector;
	//Vector<Node> nodes;
	public:
	EdgeVector<Edge> edges;
	void print()
	{
		for (ui i = 0; i < edges.getSize(); i++)
		{
			for (usi j = 0; j < edges.getVector(i).timeSize(); j++)
			{
				std::cout << edges.getVector(i).getFirstNode() << " " << edges.getVector(i).getSecondNode() <<" "<< edges.getVector(i).getTimes().getVector(j) << std::endl;
			}
		}
	}
	//void setNodes();
	//void setEdges();


};
#endif
