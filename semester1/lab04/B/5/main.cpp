#include <iostream>
#include <cassert>

void intersect(int a, int b, int c, int d, int &l, int &r)
{
	if (c >= a && c <= b || d >= a && d <= b || a >= c && a <= d || b >= c && b <= d)
	{
		l = c < a ? a : c;
		r = b < d ? b : d;
	}
	else
	{
		l = 0;
		r = -1;
	}
}

int main(void)
{
#ifdef NDEBUG

	int a, b, c, d, l, r;

	std::cin >> a >> b >> c >> d;

	intersect(a, b, c, d, l, r);

	std::cout << l << ' ' << r << std::endl;

#else

	{
		int l, r;
		intersect(0, 3, 1, 5, l, r);
		assert(l == 1 && r == 3);
	}

	{
		int l, r;
		intersect(3, 3, 0, 10, l, r);
		assert(l == 3 && r == 3);
	}

	{
		int l, r;
		intersect(-10000, -1, -25, 25, l, r);
		assert(l == -25 && r == -1);
	}

	std::cout << "SUCCESS 1!" << std::endl;

	{
		int l, r;
		intersect(1, 1, 1, 1, l, r);
		assert(l == 1 && r == 1);
	}

	{
		int l, r;
		intersect(1, 1, 2, 2, l, r);
		assert(l == 0 && r == -1);
	}

	{
		int l, r;
		intersect(1, 3, 2, 4, l, r);
		assert(l == 2 && r == 3);
	}

	{
		int l, r;
		intersect(2, 4, 1, 3, l, r);
		assert(l == 2 && r == 3);
	}

	{
		int l, r;
		intersect(1, 4, 2, 3, l, r);
		assert(l == 2 && r == 3);
	}

	{
		int l, r;
		intersect(2, 3, 1, 4, l, r);
		assert(l == 2 && r == 3);
	}


	std::cout << "SUCCESS 2!" << std::endl;

#endif

	return 0;
}
