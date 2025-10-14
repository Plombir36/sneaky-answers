#include <iostream>

int main(void)
{
	int a, n, a1 = 0, a2 = 0, a3 = 0;

	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> a;

		a1 += a > 0;
		a2 += a < 0;
		a3 += a == 0;
	}

	std::cout << a1 << ' ' << a2 << ' ' << a3 << std::endl;

	return 0;
}
