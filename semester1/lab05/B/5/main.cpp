#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> solve(std::vector<int> a)
{
	std::vector<int> ret;
	auto size = a.size();
	int count;

	for (size_t i = 0; i < size; i++)
	{
		count = 0;

		for (size_t j = 0; j < size; j++)
		{
			if ((count += (a[j] == a[i])) > 1)
			{
				break;
			}
		}

		if (count == 1)
			ret.push_back(a[i]);
	}

	return ret;
}


int main(){
#ifdef NDEBUG

	for (auto i : solve({4, 8, 16, 4, 2, -8, -8, 4}))
		std::cout << i << ' ';

	std::cout << std::endl;

#else

    {
        assert(solve({4, 8, 16, 4, 2, -8, -8, 4}) == std::vector<int>({8, 16, 2}));
        assert(solve({1, 2, 3, 2, 3, 3, 2, 4, 3}) == std::vector<int>({1, 4}));
        assert(solve({7, 8, 9, 1007, 1008, 1009, 9, 9, -2}) == std::vector<int>({7, 8, 1007, 1008, 1009, -2}));
        assert(solve({1, 4, 9, 16, 1, 1, 9, 16, 16, 9}) == std::vector<int>({4}));

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve({1, 2, 3, 2, 3, 3, 2, 4, 3}) == std::vector<int>({1, 4}));
        assert(solve({7, 8, 9, 1007, 1008, 1009, 9, 9, -2}) == std::vector<int>({7, 8, 1007, 1008, 1009, -2}));
        assert(solve({1, 4, 9, 16, 1, 1, 9, 16, 16, 9}) == std::vector<int>({4}));

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
