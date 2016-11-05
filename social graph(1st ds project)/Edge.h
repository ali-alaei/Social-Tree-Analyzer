#ifndef EDGE_H
#define EDGE_H
#include "Node.h"
#include "TimeVector.h"
typedef unsigned short int usi;
class Edge {
public:
    Edge();
    ~Edge();
    void setNodes(usi node1, usi node2);
	bool doesTimeExist(usi time);
    usi getFirstNode();
	usi getSecondNode();
    void addTime(usi);
    usi connectedTimes();
    TimeVector<usi> getTimes() const;
	usi timeSize() const;
private:
    usi node1;
    usi node2;
	TimeVector<usi> times;



};
#endif

