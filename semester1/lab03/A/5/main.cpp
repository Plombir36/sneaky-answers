#include <iostream>

int main(void)
{
	int n, r = 0;

	std::cin >> n;

	for (int i = 100; i <= 999; i++)
	{
		if ((i / 100) + ((i % 100) / 10) + (i % 10) == n)
		{
			std::cout << i << ' ';
		}
	}

	std::cout << std::endl;

	return 0;
}
