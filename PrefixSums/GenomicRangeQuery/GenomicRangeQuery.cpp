#include "GenomicRangeQuery.h"

std::vector<int> CodilityTasks::GenomicRangeQuery::solution(std::string &S, std::vector<int> &P, std::vector<int> &Q)
{
	std::vector<int> ans(P.size(), 0);
	int p;
	int q;
	std::string part;
	// ans.resize(P.size());

	for (size_t k = 0; k < P.size(); ++k)
	{
		p = P[k];
		q = Q[k];
		part = S.substr(p, q - p + 1);

		for (const auto &val : part)
		{
			if (val == 'A')
			{
				ans[k] = 1;
				break;
			}
			else if (val == 'C')
			{
				if (ans[k] >= 2)
					ans[k] = 2;
			}
			else if (val == 'G')
			{
				if (ans[k] > 3)
					ans[k] = 3;
			}
			else if (val == 'T')
			{
				if (ans[k] > 4)
					ans[k] = 4;
			}
		}
	}

	return ans;
}

int main()
{
	CodilityTasks::GenomicRangeQuery GenomicRangeQuery;
	std::string S = "CAGCCTA";
	std::vector<int> P = {2, 5, 0};
	std::vector<int> Q = {4, 5, 6};

	std::vector<int> result = GenomicRangeQuery.solution(S, P, Q);

	// Print the result
	std::cout << "Impact factors for queries: ";
	for (int factor : result)
	{
		std::cout << factor << " ";
	}
	std::cout << std::endl;

	return 0;
}
