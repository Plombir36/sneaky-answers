#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string solve(int n)
{
	std::string s = "11";
	int a = 1, b = 1;

	if (n == 1)
		return "1";

	if (n == 2)
		return "11";

	for (int i = 2; i < n; i++)
	{
		int c = a + b;
		s += std::to_string(c);
		a = b;
		b = c;
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
