#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <cassert>

void solve(std::string &s)
{
	std::stringstream ss(s);
	std::string first, last, next, line;

	ss >> first;
	ss >> last;
	next = last;

	while (ss >> last)
	{
		line += next + ' ';

		next = last;
	}

	first[0] = tolower(first[0]);
	last[0]	 = toupper(last[0]);

	s = last + ' ' + line + first;
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

        s = "Math is the poetry of logical ideas";
        solve(s);
        assert(s == "Ideas is the poetry of logical math");

        s = "Joy Boy has returned";
        solve(s);
        assert(s == "Returned Boy has joy");

        s = "Claymore berserk vagabond vinland saga";
        solve(s);
        assert(s == "Saga berserk vagabond vinland claymore");                 

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
		std::string s;

        s = "Man in mirror";
        solve(s);
        assert(s == "Mirror in man");

        s = "To be or not to be";
        solve(s);
        assert(s == "Be be or not to to");

        s = "Dang it";
        solve(s);
        assert(s == "It dang");                 

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
