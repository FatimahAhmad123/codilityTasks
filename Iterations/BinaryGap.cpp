#include "BinaryGap.h"
int CodilityTasks::BinaryGap::solution(int N)
{
	if (N < 1 || N > 2147483647)
	{
		return 0;
	}

	int largestGap = 0;
	int currentGap = 0;
	bool foundFirstOne = false;

	while (N > 0)
	{
		int binary = N % 2;

		if (binary == 1)
		{
			if (!foundFirstOne)
			{
				foundFirstOne = true;
			}
			else
			{
				largestGap = std::max(largestGap, currentGap);
				currentGap = 0;
			}
		}
		else if (foundFirstOne)
		{
			currentGap++;
		}

		N = N / 2;
	}

	return largestGap;
}

int main()
{
	CodilityTasks::BinaryGap BinaryGap;
	std::cout << BinaryGap.solution(9) << std::endl;		  // Expected: 2
	std::cout << BinaryGap.solution(529) << std::endl;		  // Expected: 4
	std::cout << BinaryGap.solution(51272) << std::endl;	  // Expected: 4
	std::cout << BinaryGap.solution(15) << std::endl;		  // Expected: 0
	std::cout << BinaryGap.solution(53) << std::endl;		  // Expected: 1
	std::cout << BinaryGap.solution(2147483647) << std::endl; // Expected: 0
	std::cout << BinaryGap.solution(2147483648) << std::endl; // Expected: 0
	std::cout << BinaryGap.solution(32) << std::endl;		  // Expected: 0
	std::cout << BinaryGap.solution(52) << std::endl;		  // Expected: 1

	return 0;
}