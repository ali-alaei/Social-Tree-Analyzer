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
	std::ifstream data("data2.txt");
	if (!data)
	{
		std::cerr << "oops file didn't open correctly" << std::endl;
		exit(1);
	}
	while (!data.eof())
	{
		data >> firstVAlue >> secondValue >> thirdValue;
		//std::cout << firstVAlue<<"\t" << secondValue<<"\t" << thirdValue << std::endl;
		init(firstVAlue, secondValue, thirdValue);
	}

}

void DataCompressor::init(usi node1Value, usi node2Value, usi time)
{
	//std::cout << "init starts" << std::endl;

	bool edgeFound = false;
	for(short int i =0;i<graph.edges.getSize();i++){
		std::cout << "for" << std::endl;

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
		//std::cout << "before for" << std::endl;
		for(short int i = 0;i<graph.nodes.getSize();i++)
		{
			std::cout << "for begins" << std::endl;
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
			//std::cout << "node1" << std::endl;

			theNode1.value = node1Value;
			graph.nodes.add(theNode1);
			//std::cout << graph.nodes.getVector(0).value << std::endl;


		}
		if(!node2Found)
		{
			theNode2.value = node2Value;
			graph.nodes.add(theNode2);
		}
		Edge newEdge;
		 newEdge.setNodes(&theNode1, &theNode2);
		// std::cout << newEdge.getNodes()[0].value<<std::endl;
		 //std::cout << newEdge.getNodes()[1].value << std::endl;

		newEdge.addTime(time);
		graph.edges.add(newEdge);
		std::cout << graph.edges.getVector(0).getNodes()[0].value;


	}
}