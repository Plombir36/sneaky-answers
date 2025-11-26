#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

int solve(std::vector<int> a)
{
	int val, max = INT_MIN;
	auto size = a.size();

	for (size_t i = 0; i < size; i++)
	{
		int reps = 0;

		for (size_t j = i; j < size; j++)
		{
			if (a[i] == a[j])
			{
				reps += 1;
			}
		}

		if (reps > max)
		{
			max = reps;
			val = a[i];
		}
	}

	return val;
}

int main()
{
#ifdef NDEBUG

#else

    {
        assert(solve({1, 2, 3, 2, 3, 3, 2, 4, 3}) == 3);
        assert(solve({-1, -1, 1, 1, 1, 1, -1, -1, -1}) == -1);
        assert(solve({2023, 2022, 2015, 2015, 2023, 2023, 2022}) == 2023);
        assert(solve({7, 77, 777, 7777, 777, 7777, 77, 7, 7}) == 7);        

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve({1, 1, 1}) == 1);
        assert(solve({1, 2, 3, -1, -2, -2, 2, 3, 3}) == 3);
        assert(solve({10}) == 10);        

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
