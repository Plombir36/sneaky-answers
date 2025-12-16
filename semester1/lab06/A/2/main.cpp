#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cassert>

void solve(std::string &s)
{
	std::string a, b, c, ret;
	std::stringstream stream(s);

	stream >> a;
	stream >> b;
	stream >> c;

	ret = a + " " + b[0] + ". " + c[0] + '.';

	s = ret;
}

int main()
{
#ifdef NDEBUG

	std::string s;

	std::getline(std::cin, s);
	solve(s);

	std::cout << s << std::endl;

#else

    {
		std::string s;

        s = "Perelman Grigori Yakovlevich";
        solve(s);
        assert(s == "Perelman G. Y.");

        s = "Nikolaeva Natalya Vasilevna";
        solve(s);
        assert(s == "Nikolaeva N. V.");

        s = "Vasileva Natalya Vasilevna";
        solve(s);
        assert(s == "Vasileva N. V.");  

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
		std::string s;

        s = "Perelman Grigori Yakovlevich";
        solve(s);
        assert(s == "Perelman G. Y.");

        s = "Nikolaeva Natalya Vasilevna";
        solve(s);
        assert(s == "Nikolaeva N. V.");

        s = "Vasileva Natalya Vasilevna";
        solve(s);
        assert(s == "Vasileva N. V.");  

		std::cout << "SUCCESS 1!" << std::endl;
    }

#endif
}
