#include <iostream>
#include <vector>

namespace CodilityTasks
{
	class PrefixSum

	{
	public:
		int solution(std::vector<int> &A);
	};
}

int CodilityTasks::PrefixSum::solution(std::vector<int> &A)
{
	int totalZeros = 0; // cars travelling east
	int carPairs = 0;

	for (int car : A)
	{
		if (car == 0)
		{
			totalZeros++;
		}
		else
		{
			carPairs += totalZeros;
			if (carPairs > 1000000000)
			{
				return -1;
			}
		}
	}

	return carPairs;
}

int main()
{
	CodilityTasks::PrefixSum PrefixSum;

	std::vector<int> A = {0, 1, 0, 1, 1};
	int result = PrefixSum.solution(A);
	std::cout << "Number of Pairs is: " << result << std::endl;

	return 0;
}
