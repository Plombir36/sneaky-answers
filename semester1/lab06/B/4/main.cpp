#include <iostream>
#include <string>
#include <cassert>

bool ispalindrome(std::string s)
{
	auto size = s.size();

	for (size_t f = size - 1, b = 0; f > b; f--, b++)
	{
		if (s[f] != s[b])
			return false;
	}

	return true;
}

int solve(std::string s)
{
	auto size = s.size();
	size_t max = 0;

	for (size_t i = 1; i <= size; i++)
	{
		if (ispalindrome(s.substr(0, i)))
		{
			max = i;
		}
	}

	return max;
}

int main()
{
#ifdef NDEBUG

	std::string s;

	std::cin >> s;

	std::cout << solve(s) << std::endl;

#else

    {
        assert(solve("ahahah") == 5);
        assert(solve("minimalmimimi") == 5);
        assert(solve("wowwathappened") == 3);
        assert(solve("redderderrik") == 6);
        assert(solve("neveroddoreven") == 14);

		std::cout << "SUCCEESS 1!" << std::endl;
    }

    {
        assert(solve("sigwig") == 1);
        assert(solve("balloonnoollab") == 14);
        assert(solve("anakin") == 3);

		std::cout << "SUCCEESS 2!" << std::endl;
    }

#endif
}
