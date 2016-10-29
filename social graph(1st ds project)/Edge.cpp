#include "Edge.h"


void Edge::setNodes(Node *node_1, Node *node_2)
{
        this->node1 = node_1;
        this->node2 = node_2;
}
Node* Edge::getNodes()
{
        Node nodes[2];
        nodes[0] = *node1;
        nodes[1] = *node2;
        return nodes;
}
void Edge::addTime(usi time)
{
        times.add(time);
}

int Edge::connectedTimes()
{
        return times.getSize();
}

Vector<usi> Edge::getTimes()
{
//    int timesArray[this->connectedTimes()];
//    for(int i=0;i<this->connectedTimes();i++){
//        timesArray[i]=this->times.getValue(i);
//    }
    return this->times;
}


Edge::Edge() 
{
}

Edge::~Edge() 
{

}

