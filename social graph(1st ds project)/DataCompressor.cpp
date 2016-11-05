//#define test
#include<assert.h>
typedef unsigned int ui;
#include"DataCompressor.h"
DataCompressor::DataCompressor()
{
}

DataCompressor::~DataCompressor()
{
}

void DataCompressor::init(std::string entry_file)
{
	//usi ctr = 0;
	usi firstVAlue, secondValue, thirdValue;
	std::ifstream data(entry_file.c_str());

	assert(data, "oops file didn't open correctly");

	while (!data.eof())
	{	
		data >> firstVAlue >> secondValue >> thirdValue;
		/*ctr++;
		if (ctr % 1000 == 0)
		{
			std::cout << ctr << std::endl;
		}*/
		
		//std::cout << firstVAlue<<"\t" << secondValue<<"\t" << thirdValue << std::endl;
		dataToList(firstVAlue, secondValue, thirdValue);
	}

}

void DataCompressor::dataToList(usi node1Value, usi node2Value, usi time)
{
	
	bool edgeFound = false;
	for(unsigned int i = 0;i<graph.edges.getSize();i++)
	{
	//std::cout << "finding edge" << std::endl;

		if(graph.edges.getVector(i).getFirstNode() == node1Value
			&& graph.edges.getVector(i).getSecondNode() == node2Value)
		{
			graph.edges.getVector(i).addTime(time);

			/*for (usi  j= 0;  j< graph.edges.getVector(i).timeSize(); j++)
			{
				std::cout << graph.edges.getVector(i).getTimes().getVector(j)<<"\n";
			}*/
			
			bool edgeFound = true;
			//std::cout << "edge found" << std::endl;
			break;
		}
		break;
	}
	if(!edgeFound)
	{
		
		//std::cout << "before for" << std::endl;
		/*for(unsigned long long i = 0;i<graph.nodes.getSize();i++)
		{
			//std::cout << "finding node" << std::endl;
			if(graph.nodes.getVector(i).value == node1Value)
			{
				node1Found = true;
				this->tmpNode1 = graph.nodes.getVector(i);
				//std::cout << "node1 found" << std::endl;


			}
			if(graph.nodes.getVector(i).value == node2Value)
			{
				node2Found = true;
				this->tmpNode2 = graph.nodes.getVector(i);
				//std::cout << "node2 found" << std::endl;


			}
			if(node1Found && node2Found)
			{

				break;
			}
		}
		if(!node1Found)
		{
			//std::cout << "node1" << std::endl;

			this->tmpNode1.value = node1Value;
			graph.nodes.add(tmpNode1);
			//std::cout << graph.nodes.getVector(0).value << std::endl;


		}
		if(!node2Found)
		{
			this->tmpNode2.value = node2Value;
			graph.nodes.add(tmpNode2);
		}*/
		newEdge.setNodes(node1Value, node2Value);
		// std::cout << newEdge.getNodes()[0].value<<std::endl;
		 //std::cout << newEdge.getNodes()[1].value << std::endl;
		newEdge.addTime(time);
		graph.edges.add(this->newEdge);
		//for (usi j = 0; j< newEdge.timeSize(); j++)    //to understand times value
		//{
			//std::cout << newEdge.getTimes().getVector(j)<<"\n";
		//}
#ifdef test
		if (graph.edges.getSize() % 1000 == 0)
		{
			
		//std::cout << "graph size" << sizeof(graph.edges)<< std::endl;

		std::cout << "edge size:" << graph.edges.getSize() << std::endl;
		}
#endif
		
		//std::cout <<"time size:"<< graph.getSize() << std::endl;
		//std::cout << "edge found" << std::endl;

		//std::cout << graph.edges.getVector(0).getNodes()[0].value;


	}
		
	
}


void DataCompressor::getCompressData(compressedData& return_compressed_data)
{
	return_compressed_data = graph;
}