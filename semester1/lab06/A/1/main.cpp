#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<int> solve(std::string s)
{
	int u, l, n;
	u = l = n = 0;

	for (auto i : s)
	{
		if (i >= 'a' && i <= 'z') l += 1;
		else if (i >= 'A' && i <= 'Z') u += 1;
		else if (i >= '0' && i <= '9') n += 1;
	}

	return {u, l, n};
}

int main()
{
#ifdef NDEBUG

	for (auto i : solve("GGs11"))
		std::cout << i << ' ';

	std::cout << std::endl;

#else

    {
        assert(solve("Mr. 2 is Bon-chan") == std::vector<int>({2, 9, 1}));
        assert(solve("Wanted Dead or Alive 200000$") == std::vector<int>({3, 14, 6}));
        assert(solve("One Piece 1997") == std::vector<int>({2, 6, 4}));
        assert(solve("10! is 3628800") == std::vector<int>({0, 2, 9}));

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve("GGs11") == std::vector<int>({2, 1, 2}));
        assert(solve("..?!..") == std::vector<int>({0, 0, 0}));
        assert(solve("000    ZZ   z") == std::vector<int>({2, 1, 3}));

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
