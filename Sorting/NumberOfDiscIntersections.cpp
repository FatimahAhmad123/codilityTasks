#include "NumberOfDiscIntersections.h"

int CodilityTasks::NumberOfDiscIntersections::solution(std::vector<int> &A)
{
	int N = A.size();
	int intersections = 0;

	std::vector<long long> startPoints(N);
	std::vector<long long> endPoints(N);

	for (int i = 0; i < N; ++i)
	{
		startPoints[i] = i - static_cast<long long>(A[i]);
		endPoints[i] = i + static_cast<long long>(A[i]);
	}

	std::sort(startPoints.begin(), startPoints.end());

	for (int i = 0; i < N; ++i)
	{
		int rightmostIndex = std::upper_bound(startPoints.begin(), startPoints.end(), endPoints[i]) - startPoints.begin();

		intersections += (rightmostIndex - i - 1);

		if (intersections > 10000000)
		{
			return -1;
		}
	}

	return intersections;
}

int main()
{
	CodilityTasks::NumberOfDiscIntersections NumberOfDiscIntersections;
	std::vector<int> A = {1, 5, 2, 1, 4, 0};

	int result = NumberOfDiscIntersections.solution(A);

	std::cout << "Number of intersecting pairs is: " << result << std::endl;

	return 0;
}
