#include "CountDiv.h"

int CodilityTasks::CountDiv::solution(int A, int B, int K)
{
	int inclusive = 0;
	if (A % K == 0)
	{
		inclusive = 1;
	}
	return (B / K) - (A / K) + inclusive;
}

int main()
{
	CodilityTasks::CountDiv CountDiv;
	int A = 6;
	int B = 11;
	int K = 2;
	int result = CountDiv.solution(A, B, K);
	std::cout << "Number of integers divisible by " << K << " in the range [" << A << "-" << B << "]: " << result << std::endl;

	return 0;
}
