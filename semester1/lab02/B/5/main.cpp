#include <iostream>

int main(void)
{
	int a, b, c = 8;

	std::cin >> a >> b;

	if (a <= 2 || a >= 6)
		c -= 2;

	if (b <= 2 || b >= 6)
		c -= 2;

	std::cout << c << std::endl;

	return 0;
}
