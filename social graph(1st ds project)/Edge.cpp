#include "Edge.h"


void Edge::setNodes(usi node_1, usi node_2)
{
        this->node1 = node_1;
        this->node2 = node_2;
}
usi Edge::getFirstNode()
{
	return this->node1;
}

usi Edge::getSecondNode()
{
	return this->node2;
}

void Edge::addTime(usi time)
{
	if (!doesTimeExist(time))
        times.add(time);
}

bool Edge::doesTimeExist(usi time)
{
	for (int i = 0; i < times.getSize();i++)
		if (time == times.getVector(i))
			return true;
	return false;
}


usi Edge::connectedTimes()
{
        return times.getSize();
}

TimeVector<usi> Edge::getTimes() const
{
//    int timesArray[this->connectedTimes()];
//    for(int i=0;i<this->connectedTimes();i++){
//        timesArray[i]=this->times.getValue(i);
//    }
    return this->times;
}


usi Edge::timeSize() const
{
	return times.getSize();
}
Edge::Edge() 
{
}

Edge::~Edge() 
{

}

