#include "PermMissingElem.h"

int CodilityTasks::PermMissingElem::solution(std::vector<int> &A)
{
	long long n = A.size() + 1;
	long long expectedSum = (n * (n + 1)) / 2;

	long long arraySum = 0;
	for (int num : A)
	{
		arraySum += num;
	}

	long long missingElement = expectedSum - arraySum;

	return static_cast<int>(missingElement);
}

int main()
{
	CodilityTasks::PermMissingElem PermMissingElem;

	std::vector<int> A = {2, 3, 1, 5};
	int result = PermMissingElem.solution(A);

	std::cout << "Missing Element is: " << result << std::endl;

	return 0;
}
