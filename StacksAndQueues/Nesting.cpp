#include "Nesting.h"
#include <stack>

int CodilityTasks::Nesting::solution(std::string &S)
{

	std::stack<char> parenthesesStack;

	for (char c : S)
	{
		if (c == '(')
		{
			parenthesesStack.push(c);
		}
		else if (c == ')' && parenthesesStack.empty())
		{
			return 0;
		}
		else if (c == ')')
		{
			parenthesesStack.pop();
		}
	}

	return parenthesesStack.empty();
}

int main()
{
	CodilityTasks::Nesting Nesting;
	std::string S1 = "(()(())())";

	std::cout << "The given string is: " << Nesting.solution(S1) << std::endl;
	return 0;
}
