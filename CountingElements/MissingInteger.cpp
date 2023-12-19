#include "MissingInteger.h"

int CodilityTasks::MissingInteger::solution(std::vector<int> &A)
{
	// Sort the array in ascending order
	std::sort(A.begin(), A.end());

	// Find the first missing positive integer
	int smallestPositive = 1;
	for (int num : A)
	{
		if (num == smallestPositive)
		{
			smallestPositive++;
		}
		else if (num > smallestPositive)
		{
			break;
		}
	}

	return smallestPositive;
}

int main()
{
	CodilityTasks::MissingInteger MissingInteger;
	std::vector<int> A1 = {1, 3, 6, 4, 1, 2};
	std::vector<int> A2 = {1, 2, 3};
	std::vector<int> A3 = {-1, -3};

	int result1 = MissingInteger.solution(A1);
	int result2 = MissingInteger.solution(A2);
	int result3 = MissingInteger.solution(A3);
	std::cout << "Smallest Positive Integer in A1 is: " << result1 << std::endl;
	std::cout << "Smallest Positive Integer in A2 is: " << result2 << std::endl;
	std::cout << "Smallest Positive Integer in A3 is: " << result3 << std::endl;

	return 0;
}
