#include <iostream>
#include <vector>
#include <cassert>

int solve(std::vector<int> a)
{
	int ret = 0;
	auto size = a.size();

	for (size_t i = 1; i < size; i++)
	{
		if (a[i] > a[i-1])
			++ret;
	}

	return ret;
}

int main()
{
#ifdef NDEBUG

	std::vector<int> arr;
	std::cout << solve(arr) << std::endl;

#else

    {
        assert(solve({100000}) == 0);
        assert(solve({1,4,7,100}) == 3);
        assert(solve({-100,99,88,55}) == 1);
        assert(solve({1,-2,3,-4,5,-6,7,-7,8,-8,9,-9}) == 5);

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
		assert(solve({1, 2, 3, 4}) == 3);
		assert(solve({4, 3, 2, 1}) == 0);
		assert(solve({1, 2, 1, 2}) == 2);

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
