#include <iostream>
#include <cassert>

int my_gcd(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
		{
			a = a % b;
		}
		else
		{
			b = b % a;
		}
	}

	return a + b;
}

void simplify(int &num, int &denom)
{
	int gcd = my_gcd(num, denom);
	num /= gcd;
	denom /= gcd;
}

int main(void)
{
#ifdef NDEBUG

	int num, denom;

	std::cin >> num >> denom;

	simplify(num, denom);

	std::cout << num << ' ' << denom << std::endl;

#else

	assert(my_gcd(12, 20) == 4);
	assert(my_gcd(35, 56) == 7);
	assert(my_gcd(100, 9900) == 100);
	assert(my_gcd(999, 2775) == 111);

	std::cout << "SUCCESS 1!" << std::endl;

	assert(my_gcd(2, 4) == 2);
	assert(my_gcd(3, 6) == 3);
	assert(my_gcd(24, 36) == 12);
	assert(my_gcd(1, 5) == 1);

	std::cout << "SUCCESS 2!" << std::endl;

	{
		int a = 15, b = 20;
		simplify(a, b);
		assert(a == 3);
		assert(b == 4);
	}

	{
		int a = 48, b = 120;
		simplify(a, b);
		assert(a == 2);
		assert(b == 5);
	}

	{
		int a = 1680, b = 4620;
		simplify(a, b);
		assert(a == 4);
		assert(b == 11);
	}

	std::cout << "SUCCESS 3!" << std::endl;

	{
		int a = 1, b = 2;
		simplify(a, b);
		assert(a == 1);
		assert(b == 2);
	}

	{
		int a = 39, b = 13;
		simplify(a, b);
		assert(a == 3);
		assert(b == 1);
	}

	{
		int a = 99, b = 99;
		simplify(a, b);
		assert(a == 1);
		assert(b == 1);
	}

	{
		int a = 22, b = 24;
		simplify(a, b);
		assert(a == 11);
		assert(b == 12);
	}

	std::cout << "SUCCESS 4!" << std::endl;

#endif

	return 0;
}
