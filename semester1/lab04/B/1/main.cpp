#include <iostream>
#include <cmath>
#include <cassert>

bool prime(int n)
{
	for (int i = 2; i <= std::sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

bool hamming(int n)
{
	for (int i = 2; i <= std::sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (prime(i) && (i != 2 && i != 3 && i != 5))
			{
				return false;
			}

			if (i * i != n)
			{
				if (prime(n / i) && ((n / i) != 2 && (n / i) != 3 && (n / i) != 5))
				{
					return false;
				}
			}
		}
	}

	return true;
}

int main(void)
{
#ifdef NDEBUG

	assert(prime(2));
	assert(!prime(8));

#else

	assert(hamming(1));
	assert(hamming(8));
	assert(hamming(12));
	assert(hamming(24));
	assert(hamming(45));
	assert(hamming(384));
	assert(!hamming(14));
	assert(!hamming(26));
	assert(!hamming(44));
	assert(!hamming(365));

	std::cout << "SUCCESS 1!" << std::endl;

#endif

	return 0;
}
