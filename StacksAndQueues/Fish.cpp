#include "Fish.h"
#include <stack>

int CodilityTasks::Fish::solution(std::vector<int> &A, std::vector<int> &B)
{
	std::stack<int> downstreamFish;
	int aliveFish = 0;

	for (size_t i = 0; i < A.size(); ++i)
	{
		if (B[i] == 1)
		{
			downstreamFish.push(A[i]);
		}
		else
		{
			while (!downstreamFish.empty())
			{
				int downstreamSize = downstreamFish.top();
				if (A[i] > downstreamSize)
				{
					downstreamFish.pop();
				}
				else
				{
					break;
				}
			}

			// If the stack is empty, the upstream fish is alive
			if (downstreamFish.empty())
			{
				++aliveFish;
			}
		}
	}

	// Add the remaining downstream fishes to the count of alive fish
	aliveFish += downstreamFish.size();

	return aliveFish;
}

int main()
{
	CodilityTasks::Fish Fish;
	std::vector<int> A = {4, 3, 2, 1, 5};
	std::vector<int> B = {0, 1, 0, 0, 0};

	int result = Fish.solution(A, B);
	std::cout << "Number of alive fish is: " << result << std::endl;

	return 0;
}
