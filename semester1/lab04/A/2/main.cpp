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

long long sum_p(unsigned p, int n)
{
	long long result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += power(i, p);
	}

	return result;
}

int main(void)
{
#ifdef NDEBUG

	int p, n;

	std::cin >> p >> n;

	std::cout << sum_p(p, n) << std::endl;

#else

	assert(sum_p(1, 10) == 55);
	assert(sum_p(2, 10) == 385);
	assert(sum_p(3, 3) == 36);
	assert(sum_p(4, 5) == 979);

	std::cout << "SUCCESS 1!" << std::endl;

	assert(sum_p(0, 40) == 40);
	assert(sum_p(0, 0) == 0);

	std::cout << "SUCCESS 2!" << std::endl;

#endif

	return 0;
}
