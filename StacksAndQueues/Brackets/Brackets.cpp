#include "Brackets.h"
#include <stack>
#include <string>

int CodilityTasks::Brackets::solution(std::string &s)
{
	std::stack<char> stack;

	for (char bracket : s)
	{
		if (bracket == '(' || bracket == '[' || bracket == '{')
		{
			stack.push(bracket);
		}
		else
		{
			if (stack.empty())
			{
				return 0; // Closing bracket with no corresponding opening bracket
			}

			char openBracket = stack.top();
			stack.pop();

			if ((bracket == ')' && openBracket != '(') ||
				(bracket == ']' && openBracket != '[') ||
				(bracket == '}' && openBracket != '{'))
			{
				return 0; // Mismatched brackets
			}
		}
	}

	return stack.empty() ? 1 : 0;
}

int main()
{
	CodilityTasks::Brackets Brackets;

	std::string S1 = "{[()()]}";
	std::string S2 = "([)()]";

	std::cout << "Result for S1: " << Brackets.solution(S1) << std::endl;
	std::cout << "Result for S2: " << Brackets.solution(S2) << std::endl;

	return 0;
}
