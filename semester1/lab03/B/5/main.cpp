#include <iostream>

int main(void)
{
	int x;

	std::cin >> x;

	for (int a = 1; a <= 1000; a++)
	{
		if (a * a >= x)
		{
			continue;
		}
		for (int b = 1; b <= 1000; b++)
		{
			if (a * a + b * b >= x)
			{
				continue;
			}
			for (int c = 1; c <= 1000; c++)
			{
				if (a * a + b * b + c * c == x)
				{
					std::cout << a << ' ' << b << ' ' << c << std::endl;
				}
			}
		}
	}

	return 0;
}
