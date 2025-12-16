#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

int solve(std::string s)
{
	int current = 0, max = 0;
	for (auto i : s)
	{
		if (i == 'a' || i == 'A')
		{
			current++;
		}
		else
		{
			max = current > max ? current : max;
			current = 0;
		}
	}

	return current > max ? current : max;
}

int main()
{
#ifdef NDEBUG

	std::string s;

	std::getline(std::cin, s);

	std::cout << solve(s) << std::endl;

#else

    {
        assert(solve("Laa A laaal LOL!") == 3);
        assert(solve("Arrrg aa cry aaaaaa yaaaa") == 6);
        assert(solve("AXAA AXAAXA AXXAAAXA AAAXAAAAAXAAAA AXAXAXAAXAAXA") == 5);    

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve("Tra-la-la-la, tra-la-la-la, chop the wood to light the fire!") == 1);    
        assert(solve("'Tisn't much thaAat I require!") == 3);
        assert(solve("When the fog of life surrounds you, when you think you've lost your w...") == 0);

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
