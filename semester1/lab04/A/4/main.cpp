#include <iostream>
#include <cassert>

void sort_by_last(int &a, int &b, int &c)
{
	int temp;

	if (a % 10 > b % 10)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (a % 10 > c % 10)
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b % 10 > c % 10)
	{
		temp = b;
		b = c;
		c = temp;
	}
}

int main(void)
{
#ifdef NDEBUG

	int a, b, c;

	std::cin >> a >> b >> c;

	sort_by_last(a, b, c);

	std::cout << a << ' ' << b << ' ' << c;

#else

	{
		int a = 138, b = 2647, c = 36971;
		sort_by_last(a, b, c);
		assert(a == 36971 && b == 2647 && c == 138);
	}

	{
		int a = 456, b = 123, c = 789;
		sort_by_last(a, b, c);
		assert(a == 123 && b == 456 && c == 789);
	}

	std::cout << "SUCCESS 1!" << std::endl;

	{
		int a = 1, b = 2, c = 3;
		sort_by_last(a, b, c);
		assert(a == 1 && b == 2 && c == 3);
	}

	{
		int a = 1, b = 3, c = 2;
		sort_by_last(a, b, c);
		assert(a == 1 && b == 2 && c == 3);
	}

	{
		int a = 2, b = 1, c = 3;
		sort_by_last(a, b, c);
		assert(a == 1 && b == 2 && c == 3);
	}

	{
		int a = 3, b = 1, c = 2;
		sort_by_last(a, b, c);
		assert(a == 1 && b == 2 && c == 3);
	}

	{
		int a = 3, b = 2, c = 1;
		sort_by_last(a, b, c);
		assert(a == 1 && b == 2 && c == 3);
	}

	{
		int a = 2, b = 3, c = 1;
		sort_by_last(a, b, c);
		assert(a == 1 && b == 2 && c == 3);
	}

	std::cout << "SUCCESS 2!" << std::endl;

#endif

	return 0;
}
