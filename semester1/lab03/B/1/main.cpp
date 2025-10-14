#include <iostream>
#include <cmath>

int main(void)
{
	int l, r, s, n;
	bool e;

	std::cin >> l >> r;

	for (int i = l; i <= r; i++)
	{
		e = true;
		n = i;
		s = 0;

		if (i < 10)
		{
			std::cout << i << ' ';
			continue;
		}

		while (n != 0)
		{
			if (n % 10 != 1 && n % 10 != 0)
			{
				e = false;
			}
			n /= 10;
		}

		if (e)
		{
			continue;
		}

		for (int j = 1; true; j++)
		{
			n = i;
			s = 0;

			while (n != 0)
			{
				s += pow(n % 10, j);
				n /= 10;
			}

			if (s > i)
			{
				break;
			}
			else if (s == i)
			{
				std::cout << i << ' ';
				break;
			}
		}
	}

	std::cout << std::endl;

	return 0;
}
