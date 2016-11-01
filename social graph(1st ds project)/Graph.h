#ifndef GRAPH_H
#define GRAPH_H 
#include"edgeVector.h"
#include"Node.h"
#include"Edge.h"
class Graph
{
	//Vector<Node> nodes;
	public:
	EdgeVector<Edge> edges;
	void print()
	{
		for (ui i = 0; i < edges.getSize(); i++)
		{
			std::cout <<"node"<<i<< edges.getVector(i).getFirstNode() << "\t"; 
			std::cout<<edges.getVector(i).getSecondNode() << "\t";	
				/*for (ui j = 0; j < edges.getVector(i).timeSize(); j++)
				{
					std::cout << edges.getVector(i).getTimes().getVector(j);
				}
				std::cout << std::endl;*/
		}
	}
	//void setNodes();
	//void setEdges();


};
#endif
