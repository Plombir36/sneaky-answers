#include <iostream>
#include <string>
#include <cassert>

int fibb(int n)
{
	if (n < 3)
		return 1;

	return fibb(n - 1) + fibb(n - 2);
}

std::string solve(int n)
{
	std::string s;

	for (int i = 1; i <= n; i++)
	{
		s += std::to_string(fibb(i));
	}

	return s;
}

int main(){
#ifdef NDEBUG

	int n;

	std::cin >> n;

	std::cout << solve(n) << std::endl;

#else

    {
        assert(solve(7) == "11235813");
        assert(solve(1) == "1");
        assert(solve(2) == "11");
        assert(solve(3) == "112");               

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        assert(solve(5) == "11235");
        assert(solve(6) == "112358");
        assert(solve(9) == "112358132134");               

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
