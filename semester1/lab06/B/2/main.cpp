#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <cassert>

void solve(std::string &s)
{
	std::stringstream ss(s), ms(s);
	std::string token, line;
	size_t max = 0;

	while (ms >> token) max = std::max(max, token.size());

	while (ss >> token)
	{
		if (token.size() == max)
		{
			for (size_t i = 0; i < token.size(); i++)
			{
				token[i] = toupper(token[i]);
			}
		}

		line += token + ' ';
	}

	line.pop_back();

	s = line;
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
        
        s = "A jack of all trades is a master of none";
        solve(s);
        assert(s == "A jack of all TRADES is a MASTER of none");

        s = "An idle brain is devils workshop";
        solve(s);
        assert(s == "An idle brain is devils WORKSHOP");

        s = "Once bitten twice shy";
        solve(s);
        assert(s == "Once BITTEN twice shy");  

        s = "Gomu gomu no hito";
        solve(s);
        assert(s == "GOMU GOMU no HITO");         

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
		std::string s;
        
        s = "upper";
        solve(s);
        assert(s == "UPPER");

        s = "one two THREE";
        solve(s);
        assert(s == "one two THREE");

        s = "gg gg gg gg";
        solve(s);
        assert(s == "GG GG GG GG");         

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
