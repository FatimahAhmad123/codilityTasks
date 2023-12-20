#include "GenomicRangeQuery.h"

std::vector<int> CodilityTasks::GenomicRangeQuery::solution(std::string &S, std::vector<int> &P, std::vector<int> &Q)
{
	std::vector<int> ans;

	for (size_t k = 0; k < P.size(); ++k)
	{
		int p = P[k];
		int q = Q[k];

		if (S.substr(p, q - p + 1).find('A') != std::string::npos)
		{
			ans.push_back(1);
		}
		else if (S.substr(p, q - p + 1).find('C') != std::string::npos)
		{
			ans.push_back(2);
		}
		else if (S.substr(p, q - p + 1).find('G') != std::string::npos)
		{
			ans.push_back(3);
		}
		else
		{
			ans.push_back(4);
		}
	}

	return ans;
}

int main()
{
	CodilityTasks::GenomicRangeQuery GenomicRangeQuery;

	return 0;
}
