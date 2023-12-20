#include "MinAvgTwoSlice.h"

int CodilityTasks::MinAvgTwoSlice::solution(std::vector<int> &A)
{
	int N = A.size();

	// Initialize with the maximum possible average value
	double minAvg = (A[0] + A[1]) / 2.0;
	int minIndex = 0;

	for (int i = 2; i < N; ++i)
	{
		// Check average of a slice of length 2
		double avg2 = (A[i - 1] + A[i]) / 2.0;
		if (avg2 < minAvg)
		{
			minAvg = avg2;
			minIndex = i - 1;
		}

		// Check average of a slice of length 3
		double avg3 = (A[i - 2] + A[i - 1] + A[i]) / 3.0;
		if (avg3 < minAvg)
		{
			minAvg = avg3;
			minIndex = i - 2;
		}
	}

	return minIndex;
}

int main()
{
	CodilityTasks::MinAvgTwoSlice MinAvgTwoSlice;

	return 0;
}
