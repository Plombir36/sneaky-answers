#include <iostream>

int main(void)
{
	long n, a, mx = 0, mn = 9;

	std::cin >> n;

	while (n != 0)
	{
		a = n % 10;

		if (a > mx)
		{
			mx = a;
		}

		if (a < mn)
		{
			mn = a;
		}

		n /= 10;
	}

	std::cout << mx << ' ' << mn << std::endl;

	return 0;
}
