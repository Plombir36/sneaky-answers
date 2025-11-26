#include <iostream>
#include <vector>
#include <cassert>

void solve(std::vector<int> &a, std::vector<int> &b)
{
	auto size = a.size();

	for (size_t i = 0; i < size; i++)
	{
		if (a[i] > b[i])
		{
			int temp;
			temp = a[i];
			a[i] = b[i];
			b[i] = temp;
		}
	}
}

int main()
{
#ifdef NDEBUG

	std::vector<int> a;
	std::vector<int> b;
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;

		std::cin >> temp;

		a.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		int temp;

		std::cin >> temp;

		b.push_back(temp);
	}

	solve(a, b);

	for (auto i : a)
		std::cout << i << ' ';

	std::cout << std::endl;

	for (auto i : b)
		std::cout << i << ' ';

	std::cout << std::endl;


#else

    {
        std::vector<int> a, b;

        a = std::vector<int>{1,2,3,4,5};
        b = std::vector<int>{5,4,3,2,1};
        solve(a, b);
        assert(a == std::vector<int>({1,2,3,2,1}));
        assert(b == std::vector<int>({5,4,3,4,5}));

        a = std::vector<int>{-7, 7,  11, -8, 22,  31, -50};
        b = std::vector<int>{7, -77, 88, 31, -19, 0,  -46};
        solve(a, b);
        assert(a == std::vector<int>({-7, -77, 11, -8, -19, 0, -50}));
        assert(b == std::vector<int>({7,  7,   88, 31, 22, 31, -46}));

        a = std::vector<int>{789987, 2022};
        b = std::vector<int>{789789, 2023};
        solve(a, b);
        assert(a == std::vector<int>({789789, 2022}));
        assert(b == std::vector<int>({789987, 2023}));

        a = std::vector<int>({5,5,5,5,5,5,5,5,5,5,5,2});
        b = std::vector<int>({4,4,4,4,4,4,4,4,4,4,4,5});
        solve(a, b);
        assert(a == std::vector<int>({4,4,4,4,4,4,4,4,4,4,4,2}));
        assert(b == std::vector<int>({5,5,5,5,5,5,5,5,5,5,5,5}));

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
		std::vector<int> a, b;

        a = std::vector<int>();
        b = std::vector<int>();
        solve(a, b);
        assert(a == std::vector<int>());
        assert(b == std::vector<int>());

        a = std::vector<int>({1, 2, 3});
        b = std::vector<int>({3, 2, 1});
        solve(a, b);
        assert(a == std::vector<int>({1, 2, 1}));
        assert(b == std::vector<int>({3, 2, 3}));

        a = std::vector<int>({1, 1, 1, 1});
        b = std::vector<int>({2, 2, 2, 2});
        solve(a, b);
        assert(a == std::vector<int>({1, 1, 1, 1}));
        assert(b == std::vector<int>({2, 2, 2, 2}));

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
