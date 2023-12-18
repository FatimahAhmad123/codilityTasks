#include <iostream>
#include <vector>
#include <algorithm>

namespace CodilityTasks
{
	class MaxProductOfThree

	{
	public:
		int solution(std::vector<int> &A);
	};
}

int CodilityTasks::MaxProductOfThree::solution(std::vector<int> &A)
{
	if (A.size() < 3)
	{
		std::cout << "Error: Array must have at least 3 elements." << std::endl;
		return 0;
	}

	std::sort(A.begin(), A.end());

	int n = A.size();

	int maxProduct1 = A[n - 3] * A[n - 2] * A[n - 1];

	int maxProduct2 = A[0] * A[1] * A[n - 1];

	return std::max(maxProduct1, maxProduct2);
}

int main()
{
	CodilityTasks::MaxProductOfThree maxProductOfThree;
	std::vector<int> A = {-3, 1, 2, -2, 5, 6};
	int result = maxProductOfThree.solution(A);
	std::cout << "Maximal Product of Three: " << result << std::endl;
	return 0;
}
