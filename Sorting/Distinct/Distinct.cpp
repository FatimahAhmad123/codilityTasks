#include "Distinct.h"

int CodilityTasks::Distinct::solution(std::vector<int> &A)
{
	if (A.empty())
	{
		return 0;
	}

	std::sort(A.begin(), A.end());
	int result = 1; // At least one distinct element (the first one)
	for (int i = 1; i < A.size(); ++i)
	{
		if (A[i] != A[i - 1])
		{
			result++;
		}
	}
	return result;
}

int main()
{
	CodilityTasks::Distinct Distinct;
	std::vector<int> A = {1, 2, 3, 2, 1, 1};
	int result = Distinct.solution(A);
	std::cout << "Disitinct Number in vector is: " << result << std::endl;
	return 0;
}
