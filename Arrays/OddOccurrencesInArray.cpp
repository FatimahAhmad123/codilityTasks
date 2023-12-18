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

	for (int i : A)
	{
		if (i < 1 || i > 1000000000)
		{

			std::cout << "Error: Element " << i << " is outside the range [1..1,000,000,000]." << std::endl;
			return 0;
		}
		result ^= i;
	}
	return result;
}

int main()
{
	CodilityTasks::OddOccurencesInArray OddOccurencesInArray;
	std::vector<int> A = {9, 9, 1, 1, 2, 4, 4};
	int result = OddOccurencesInArray.solution(A);

	std::cout << "The Element only occuring once is: " << result << std::endl;

	return 0;
}
