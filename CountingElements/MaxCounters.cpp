#include <iostream>
#include <vector>
#include <algorithm>

namespace CodilityTasks
{
	class MaxCounters

	{
	public:
		std::vector<int> solution(int N, std::vector<int> &A);
	};
}

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
			maxCounter = std::max(maxCounter, counters[value - 1]);
		}
		else if (value == N + 1)
		{
			// Max counter operation
			lastMaxCounter = maxCounter;
		}
	}

	for (int &counter : counters)
	{
		counter = std::max(counter, lastMaxCounter);
	}

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
