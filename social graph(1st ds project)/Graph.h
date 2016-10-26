#ifndef GRAPH_H
#define GRAPH_H 
#include"Vector.h"
#include"Node.h"
#include"Edge.h"
class Graph
{
public:
	Vector<Node> nodesList;
	Vector<Edge> edgeList;
	Graph();
	~Graph();
	//void setNodes();
	//void setEdges();
private:

};
#endif
