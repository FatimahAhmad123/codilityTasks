#include "TapeEquilibrium.h"

int CodilityTasks::TapeEquilibrium::solution(std::vector<int> &A)
{
	if (A.size() < 2 || A.size() > 100000)
	{
		std::cout << "Error: The size of array A must be within the range [2..100,000]." << std::endl;
		return -1;

		for (int num : A)
		{
			if (num < -1000 || num > 1000)
			{
				std::cout << "Error: Element " << num << " is outside the range [-1,000..1,000]." << std::endl;
				return -1;
			}
		}
	}
	int FirstEntry = A[0];
	int sum = 0;
	for (int i = 1; i < A.size(); ++i)
	{
		sum += A[i];
	}

	int minDifference = std::abs(FirstEntry - sum);

	for (int i = 1; i < A.size() - 1; ++i)
	{
		FirstEntry += A[i];
		sum -= A[i];
		int currentDifference = std::abs(FirstEntry - sum);
		minDifference = std::min(minDifference, currentDifference);
	}

	return minDifference;
}

int main()
{
	CodilityTasks::TapeEquilibrium TapeEquilibrium;

	std::vector<int> A = {3, 1, 2, 4, 3};
	int result = TapeEquilibrium.solution(A);

	std::cout << "Minimal Difference is: " << result << std::endl;

	return 0;
}
