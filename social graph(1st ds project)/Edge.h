#ifndef EDGE_H
#define EDGE_H
#include "Node.h"
#include "Vector.h"
class Edge {
public:
    Edge();

    ~Edge();

    void setNodes(Node *node1, Node *node2);

    Node *getNodes();


    void addTime(int);
    int connectedTimes();
    Vector<int> getTimes();



private:
    Node *node1;
    Node *node2;
	Vector<int> times;



};
#endif

