#include"MatchMakingResult.h"
void MatchMakingResult::print(MatchMakingResult& return_compressed_data)
{
	for (int i = 0; i < return_compressed_data.edges.getSize(); i++)
	{
		std::cout << "Edge " << return_compressed_data.edges.getVector(i).getFirstNode() << ", "
			<< return_compressed_data.edges.getVector(i).getSecondNode() << "repeated " << return_compressed_data.edges.getVector(i).timeSize()
			<< "times in ";
		for (int j = 0; j < return_compressed_data.edges.getVector(i).timeSize(); j++)
		{
			std::cout << return_compressed_data.edges.getVector(i).getTimes().getVector(j) << "\t";
		}
		std::cout << "\n";
	}

}