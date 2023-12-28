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
			heightStack.push(h); // 8      0
		}						 // 8      0
								 // 5      1
								 // 5,7    1
								 // 5,7,9  1
								 // 5,7,8  2
								 // 5,7    3
								 // 5,4    4
								 // 5,8    5
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
