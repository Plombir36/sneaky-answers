#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

bool is_prime(int n)
{
	int center = std::sqrt(n) + 1;

	for (int i = 2; i < center; i++)
	{
		if (n % i == 0 || n % (n / i) == 0)
			return false;
	}

	return n != 1 ? true : false;
}

std::vector<int> solve(std::vector<int> a)
{
	std::vector<int> ret({});
	auto size = a.size();

	for (size_t i = 0; i < size; i++)
	{
		if (is_prime(a[i]))
		{
			ret.push_back(i);
		}
	}

	return ret;
}

int main(void)
{
#ifdef NDEBUG

	std::vector<int> arr({1, 2, 3, 4, 5, 6, 7, 8, 9});

	for (auto i : solve(arr))
		std::cout << i << ' ';

	std::cout << std::endl;

#else

    {
        assert(solve({1,2,3,4,5,6,7,8,9}) == std::vector<int>({1,2,4,6}));       
        assert(solve({1,2,4,8,16,32,64}) == std::vector<int>({1}));
        assert(solve({11,13,21,23,31,33,41,43,51,53,61,63}) 
        == std::vector<int>({0,1,3,4,6,7,9,10}));
        assert(solve({183,177,179,147,149,143,107}) == std::vector<int>({2,4,6}));    

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve({4, 8, 32, 64}) == std::vector<int>({}));       
        assert(solve({1, 2}) == std::vector<int>({1}));       
        assert(solve({7}) == std::vector<int>({0}));       

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
