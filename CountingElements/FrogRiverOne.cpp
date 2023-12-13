#include <iostream>
#include <vector>
#include <set>

namespace CodilityTasks
{
	class FrogRiverOne
	{
	public:
		int solution(int X, std::vector<int> &A);
	};
}

int CodilityTasks::FrogRiverOne::solution(int X, std::vector<int> &A)
{
	std::set<int> leafPosition;

	for (std::size_t time = 0; time < A.size(); ++time)
	{
		leafPosition.insert(A[time]);

		// Check if the frog can jump to the other side
		if (leafPosition.size() == static_cast<std::size_t>(X))
		{
			return time;
		}
	}

	// If we reach here, it means the frog can't jump to the other side
	return -1;
}

int main()
{
	CodilityTasks::FrogRiverOne FrogRiverOne;

	std::vector<int> A = {1, 3, 1, 4, 2, 3, 5, 4};
	int X = 5;
	int result = FrogRiverOne.solution(X, A);
	std::cout << "The frog jumps at: " << result << std::endl;

	return 0;
}
