#include"DataCompressor.h"
DataCompressor::DataCompressor()
{
}

DataCompressor::~DataCompressor()
{
}

void DataCompressor::dataToList()
{
	usi firstVAlue, secondValue, thirdValue;
	std::ifstream data("data.txt");
	if (!data)
	{
		std::cerr << "oops file didn't open correctly" << std::endl;
		exit(1);
	}
	while (data >> firstVAlue >> secondValue >> thirdValue)
	{
		init(firstVAlue, secondValue, thirdValue);
	}

}
void DataCompressor::init(usi node1Value, usi node2Value, usi time)
{
	bool edgeFound = false;
	for(short int i =0;i<graph.edges.getSize();i++){
		if(graph.edges.getVector(i).getNodes()[0].value == node1Value && graph.edges.getVector(i).getNodes()[1].value == node2Value)
		{
			graph.edges.getVector(i).addTime(time);
			bool edgeFound = true;
			break;
		}
	}
	if(!edgeFound)
	{
		bool node1Found = false;
		bool node2Found = false;
		Node theNode1;
		Node theNode2;

		for(short int i = 0;i<graph.nodes.getSize();i++)
		{
			if(graph.nodes.getVector(i).value == node1Value)
			{
				node1Found = true;
				theNode1 = graph.nodes.getVector(i);

			}
			if(graph.nodes.getVector(i).value == node2Value)
			{
				node2Found = true;
				theNode2 = graph.nodes.getVector(i);

			}
			if(node1Found && node2Found)
			{
				break;
			}
		}
		if(!node1Found)
		{
			theNode1.value = node1Value;
			graph.nodes.add(theNode1);

		}
		if(!node2Found)
		{
			theNode2.value = node2Value;
			graph.nodes.add(theNode2);
		}
		Edge newEdge;
		newEdge.setNodes(&theNode1,&theNode2);
		newEdge.addTime(time);
	}
}