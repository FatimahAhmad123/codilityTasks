#include "MaxCounters.h"

std::vector<int> CodilityTasks::MaxCounters::solution(int N, std::vector<int> &A)
{
	std::vector<int> counters(N, 0);
	int maxCounter = 0;
	int lastMaxCounter = 0;

	for (int value : A)
	{
		if (value >= 1 && value <= N)
		{
			// Increase operation
			counters[value - 1] = std::max(counters[value - 1], lastMaxCounter) + 1;
			maxCounter = std::max(maxCounter, counters[value - 1]); //1
		}
		else if (value == N + 1)
		{
			// Max counter operation
			lastMaxCounter = maxCounter;
		} // 3 4 4 6 1 4 4
		// 0 0 1 0 0   //1  //0
		// 0 0 1 1 0   //1  //0
		// 0 0 1 2 0   //2  //0
		// 0 0 1 2 0   //2  //2
		// 3 0 1 2 0   //2  //2
		// 3 0 1 3 0   //3  //2
		// 3 0 1 4 0   //4  //2
	}

	for (int &counter : counters)
	{
		std::cout << counter << "---" << std::max(counter, lastMaxCounter) << std::endl;
		counter = std::max(counter, lastMaxCounter);
	}
	std::cout << lastMaxCounter << std::endl;

	return counters;
}

int main()
{
	CodilityTasks::MaxCounters MaxCounters;

	std::vector<int> A = {3, 4, 4, 6, 1, 4, 4};
	int X = 5;
	std::vector<int> result = MaxCounters.solution(X, A);

	// Printing the result
	std::cout << "After MaxCounter is: ";
	for (int value : result)
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;

	return 0;
}
