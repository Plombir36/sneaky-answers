#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> solve(std::vector<int> a)
{
	auto size = a.size();

	for (size_t i = 1; i < size; i++)
	{
		if ((a[i] >= 0 && a[i-1] >= 0) || (a[i] < 0 && a[i-1] < 0))
			return std::vector<int>({a[i-1], a[i]});
	}

	return {};
}

int main()
{
#ifdef NDEBUG

	for (auto i : solve({0, 1, 0}))
		std::cout << i << ' ';

	std::cout << std::endl;

#else

    {
        assert(solve({1, -1, 5, -7, 10, 36, -61, 88}) == std::vector<int>({10, 36}));
        assert(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) == std::vector<int>({3, 10}));
        assert(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) == std::vector<int>({-3039, -2023}));     

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve({1, 2}) == std::vector<int>({1, 2}));
        assert(solve({-1, 1}) == std::vector<int>());
        assert(solve({-1, -1}) == std::vector<int>({-1, -1}));
        assert(solve({0, 1}) == std::vector<int>({0, 1}));
        assert(solve({1, 0}) == std::vector<int>({1, 0}));
        assert(solve({0, -1}) == std::vector<int>({}));
        assert(solve({-1, 0}) == std::vector<int>({}));
        assert(solve({0, 0}) == std::vector<int>({0, 0}));

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
