#include <iostream>
#include <cassert>

#define abs(x) (x < 0 ? -x : x)

void digit_root(long long &n)
{
	while (abs(n) > 9)
	{
		long long temp = 0;

		while (n != 0)
		{
			temp += n % 10;
			n /= 10;
		}

		n = abs(temp);
	}
}

int main(void)
{
#ifdef NDEBUG

	long long n;

	std::cin >> n;

	digit_root(n);

	std::cout << n << std::endl;

#else

	{
		long long x = 8;
		digit_root(x);
		assert(x == 8);
	}

	{
		long long x = 25;
		digit_root(x);
		assert(x == 7);
	}

	{
		long long x = 99;
		digit_root(x);
		assert(x == 9);
	}

	{
		long long x = 987;
		digit_root(x);
		assert(x == 6);
	}

	{
		long long x = 777'777'777'777;
		digit_root(x);
		assert(x == 3);
	}

	std::cout << "SUCCESS 1!" << std::endl;

	{
		long long x = 12345;
		digit_root(x);
		assert(x == 6);
	}

	{
		long long x = 789;
		digit_root(x);
		assert(x == 6);
	}

	{
		long long x = 665;
		digit_root(x);
		assert(x == 8);
	}

	{
		long long x = -89123;
		digit_root(x);
		assert(x == 5);
	}

	{
		long long x = 0;
		digit_root(x);
		assert(x == 0);
	}

	std::cout << "SUCCESS 2!" << std::endl;

#endif

	return 0;
}
