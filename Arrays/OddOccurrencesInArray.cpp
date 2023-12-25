#include "OddOccurencesInArray.h"

int CodilityTasks::OddOccurencesInArray::solution(std::vector<int> &A)
{

	if (A.empty())
	{

		std::cout << "Error: The array is empty." << std::endl;
		return 0;
	}

	if (A.size() % 2 == 0)
	{

		std::cout << "Error: The array must have an odd number of elements." << std::endl;
		return 0;
	}

	int result = 0;

	for (const int &i : A)
	{
		result ^= i;
	}
	return result;
}

int main()
{
	CodilityTasks::OddOccurencesInArray OddOccurencesInArray;
	std::vector<int> A = {9, 2, 9, 1, 2, 4, 4};
	// {2, 2, 3, 4, 4, 9, 9}

	int result = OddOccurencesInArray.solution(A);

	std::cout << "The Element only occuring once is: " << result << std::endl;

	return 0;
}
