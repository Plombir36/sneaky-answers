#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

int solve(std::string s)
{
	int count = 0;
	std::stringstream ss(s);
	std::string token;

	while (ss >> token)
		count += token[0] >= 'A' && token[0] <= 'Z';

	return count;
}

int main()
{
#ifdef NDEBUG

#else

    {
        assert(solve("People, who can’t Throw something important Away, can never hope to Change anything") == 4);
        assert(solve("To be OR not to be?") == 2);
        assert(solve("GREAT ENEMY FELLED") == 3);    

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve("iS tHIS cORRECT?") == 0);
        assert(solve("zero zero zero") == 0);
        assert(solve("GGs") == 1);    

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
