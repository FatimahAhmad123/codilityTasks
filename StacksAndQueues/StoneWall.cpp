#include "StoneWall.h"
#include <stack>

int CodilityTasks::StoneWall::solution(std::vector<int> &H)
{
	std::stack<int> heightStack;
	int blockCount = 0;

	for (int h : H)
	{
		while (!heightStack.empty() && h < heightStack.top())
		{
			heightStack.pop();
			blockCount++;
		}

		if (heightStack.empty() || h > heightStack.top())
		{
			heightStack.push(h);
		}
	}

	return blockCount + heightStack.size();
}

int main()
{
	CodilityTasks::StoneWall StoneWall;
	std::vector<int> H = {8, 8, 5, 7, 9, 8, 7, 4, 8};
	std::cout << "The result is: " << StoneWall.solution(H) << std::endl;

	return 0;
}
