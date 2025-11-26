#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> solve(std::vector<int> a)
{
	std::vector<int> ret({0, 0, 0, 0, 0, 0, 0, 0, 0});

	for (auto i : a)
		++ret[i-1];

	return ret;
}

int main()
{
#ifdef NDEBUG

#else

    {
        assert(solve({1, 1, 4, 1, 5, 8, 6, 3, 5, 1, 6}) 
        == std::vector<int>({4, 0, 1, 1, 2, 2, 0, 1, 0}));

        assert(solve({2, 4, 8, 8, 8, 8, 8, 2}) 
        == std::vector<int>({0, 2, 0, 1, 0, 0, 0, 5, 0}));

        assert(solve({5, 4, 1, 2, 3}) 
        == std::vector<int>({1, 1, 1, 1, 1, 0, 0, 0, 0}));

        assert(solve({7, 7, 7, 7, 7, 7, 7, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7}) 
        == std::vector<int>({0, 0, 1, 0, 0, 0, 16, 0, 0}));        

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve({})
        == std::vector<int>({0, 0, 0, 0, 0, 0, 0, 0, 0}));

        assert(solve({1, 2, 3, 4, 5, 6, 7, 8, 9})
        == std::vector<int>({1, 1, 1, 1, 1, 1, 1, 1, 1}));

        assert(solve({1, 2, 3})
        == std::vector<int>({1, 1, 1, 0, 0, 0, 0, 0, 0}));

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
