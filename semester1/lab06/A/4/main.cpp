#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cassert>

bool solve(std::string s)
{
	auto size = s.size();

	for (size_t i = 0; i < size; i++)
	{
		s[i] = tolower(s[i]);
	}

	for (size_t f = size - 1, b = 0; f > b; f--, b++)
	{
		while (!isalpha(s[f]) && f > b) --f;
		while (!isalpha(s[b]) && f > b) ++b;

		if (s[f] != s[b])
			return false;
	}

	return true;
}

int main()
{
#ifdef NDEBUG

#else

    {
        assert(solve("F"));
        assert(solve("Madam, I’m Adam"));
        assert(solve("Do geese see God?"));
        assert(solve("No lemon, no melon"));
        assert(solve("Are we not drawn onward, we few, drawn onward to new era?"));  
        assert(!solve("Was it cat I saw?"));    
        assert(solve("Borrow or rob?"));    
        assert(!solve("xyztyx"));  

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(!solve("good game"));    
        assert(!solve("man"));  
        assert(solve(" "));    
        assert(solve(" gg     "));    

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
