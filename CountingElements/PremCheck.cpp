#include <iostream>
#include <vector>
#include <algorithm>

namespace CodilityTasks
{
	class PermCheck
	{
	public:
		int solution(std::vector<int> &A);
	};
}

int CodilityTasks::PermCheck::solution(std::vector<int> &A)
{
	// Sorting Array to use Unique
	std::sort(A.begin(), A.end());

	// Using Unique to find duplicates
	auto duplicateIt = std::unique(A.begin(), A.end());

	// Checking if duplicates were found
	if (duplicateIt != A.end())
	{
		return 0;
	}

	for (std::size_t i = 1; i <= A.size(); ++i)
	{
		if (A[i - 1] != static_cast<int>(i))
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	CodilityTasks::PermCheck PermCheck;

	std::vector<int> A = {4, 1, 2, 3};
	int X = 5;
	int result = PermCheck.solution(A);
	std::cout << "Permutation Check returns: " << result << std::endl;

	return 0;
}
