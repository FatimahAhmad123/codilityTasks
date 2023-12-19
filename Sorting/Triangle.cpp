#include "Triangle.h"

int CodilityTasks::Triangle::solution(std::vector<int> &A)
{
	if (A.size() < 3)
	{
		return 0;
	}

	std::sort(A.begin(), A.end());

	for (std::size_t i = 0; i < A.size() - 2; ++i)
	{
		long long sum = static_cast<long long>(A[i]) + A[i + 1];

		if (sum > A[i + 2])
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	CodilityTasks::Triangle Triangle;
	std::vector<int> A = {10, 2, 5, 1, 8, 20};
	int result = Triangle.solution(A);
	std::cout << "The Result is: " << result << std::endl;
	return 0;
}
