#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

int todigit(char c)
{
	return c - '0';
}

void solve(std::string &s)
{
	auto size = s.size();
	int ans = 0;
	bool sum = true;

	for (size_t i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			ans += sum ? todigit(s[i]) : -todigit(s[i]);
		}
		else
		{
			sum = s[i] == '+' ? true : false;
		}
	}

	s = std::to_string(ans);
}

int main()
{
#ifdef NDEBUG

	std::string s;

	std::cin >> s;
	solve(s);

	std::cout << s << std::endl;

#else

    {
		std::string s;

        s = "1+2+3-4+5";
        solve(s);
        assert(s == "7");

        s = "7+7+7-7+7-7-7-7+7";
        solve(s);
        assert(s == "7");

        s = "7-8-9-5-5+1+2-1-2-3+4-9-9+6+7-9";
        solve(s);
        assert(s == "-33");

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
		std::string s;

        s = "";
        solve(s);
        assert(s == "0");      

        s = "1-1-1-1";
        solve(s);
        assert(s == "-2");

        s = "1+1-1+1-1";
        solve(s);
        assert(s == "1");

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
