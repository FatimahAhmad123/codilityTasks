#include <iostream>
#include <vector>

namespace CodilityTasks
{
	class CyclicRotation
	{
	public:
		static std::vector<int> solution(std::vector<int> &A, int k);
	};
}

std::vector<int> CodilityTasks::CyclicRotation::solution(std::vector<int> &A, int k)
{
	int n = A.size();

	if (n == 0)
	{
		// Handling the case of an empty vector
		return A;
	}

	k = k % n; // Ensuring it is within valid range

	std::vector<int> rotatedVector = A;

	for (int i = 0; i < k; i++)
	{
		int val = rotatedVector.back();
		rotatedVector.pop_back();
		rotatedVector.insert(rotatedVector.begin(), val);
	}

	return rotatedVector;
}

int main()
{
	std::vector<int> A = {1, 2, 3, 4, 5, 6, 7};
	int k = 5;

	std::vector<int> rotatedVector = CodilityTasks::CyclicRotation::solution(A, k);

	// Printing the rotated vector
	for (int i = 0; i < rotatedVector.size(); i++)
	{
		std::cout << rotatedVector[i] << " ";
	}
	std::cout << std::endl;
	// Rotated once: [7, 1, 2, 3, 4, 5, 6]
	// Rotated twice: [6, 7, 1, 2, 3, 4, 5]
	// Rotated thrice: [5, 6, 7, 1, 2, 3, 4]
	// Rotated four times: [4, 5, 6, 7, 1, 2, 3]
	// Rotated five times: [3, 4, 5, 6, 7, 1, 2]

	return 0;
}
