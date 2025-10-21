#include <iostream>
#include <cmath>
#include <cassert>

bool perfect(int n)
{
	int result = 1;

	for (int i = 2; i <= std::sqrt(n); i++)
	{
		if (n % i == 0)
		{
			result += n / i;
			result += (i * i != 0) * i;
		}
	}

	return result == n ? true : false;
}

int main(void)
{
#ifdef NDEBUG

	int m, n;

	std::cin >> m >> n;

	for (; m <= n; m++)
	{
		if (perfect(m))
		{
			std::cout << m << ' ';
		}
	}

	std::cout << std::endl;

#else

	assert(perfect(6));
	assert(perfect(28));
	assert(perfect(496));
	assert(perfect(8128));
	assert(!perfect(36));
	assert(!perfect(489));
	assert(!perfect(812));
	assert(!perfect(6458));

	std::cout << "SUCCESS!" << std::endl;

#endif

	return 0;
}
