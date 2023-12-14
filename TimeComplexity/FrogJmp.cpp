#include <iostream>
#include <vector>

namespace CodilityTasks
{
	class FrogJmp
	{
	public:
		int solution(int X, int Y, int D);
	};
}

int CodilityTasks::FrogJmp::solution(int X, int Y, int D)
{
	int distance = Y - X;
	int jumps = distance / D;

	if (distance % D != 0)
	{
		jumps++;
	}

	return jumps;
}

int main()
{
	CodilityTasks::FrogJmp FrogJmp;

	int X = 10;
	int Y = 85;
	int D = 30;

	int result = FrogJmp.solution(X, Y, D);

	std::cout << "Minimal number of jumps: " << result << std::endl;

	return 0;
}
