#ifndef EDGE_H
#define EDGE_H
#include "Node.h"
#include "Vector.h"
typedef unsigned short int usi;
class Edge {
public:
    Edge();

    ~Edge();

    void setNodes(Node *node1, Node *node2);

    Node *getNodes();
    void addTime(usi);
    int connectedTimes();
    Vector<usi> getTimes();



private:
    Node *node1;
    Node *node2;
	Vector<usi> times;



};
#endif

