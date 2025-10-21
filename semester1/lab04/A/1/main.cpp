#include <iostream>
#include <cassert>

long long power(long long x, unsigned k)
{
	long long result = 1;

	for (unsigned i = 0; i < k; i++)
	{
		result *= x;
	}

	return result;
}

int main(void)
{
#ifdef NDEBUG

	int x, p;

	std::cin >> x >> p;

	std::cout << power(x, p) << std::endl;

#else

	assert(power(1, 100) == 1);
	assert(power(2, 7) == 128);
	assert(power(2, 10) == 1024);
	assert(power(6, 5) == 7776);

	std::cout << "SUCCESS 1!" << std::endl;

	assert(power(0, 0) == 1);
	assert(power(0, 1) == 0);
	assert(power(0, 4) == 0);
	assert(power(-3, 2) == 9);
	assert(power(-3, 3) == -27);

	std::cout << "SUCCESS 2!" << std::endl;

#endif

	return 0;
}
