#include <iostream>
#include <cassert>

int Syracuse(int n)
{
	return n == 1 ? 0 : n % 2 == 0 ? Syracuse(n / 2) + 1 : Syracuse((n * 3 + 1) / 2) + 1;
}

int main(void)
{
#ifdef NDEBUG

	int m, n;

	std::cin >> m >> n;

	for (; m <= n; m++)
	{
		std::cout << m << " in " << Syracuse(m) << " steps" << std::endl;
	}

#else

	assert(Syracuse(1) == 0);
	assert(Syracuse(2) == 1);

	std::cout << "SUCCESS 1!" << std::endl;

	assert(Syracuse(21) == 6);
	assert(Syracuse(22) == 11);
	assert(Syracuse(23) == 11);
	assert(Syracuse(24) == 8);
	assert(Syracuse(25) == 16);
	assert(Syracuse(26) == 8);
	assert(Syracuse(27) == 70);
	assert(Syracuse(28) == 13);

	std::cout << "SUCCESS 2!" << std::endl;

#endif

	return 0;
}
