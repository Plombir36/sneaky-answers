#include <iostream>

int main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if (a % b == 0 && a % c == 0)
	{
		std::cout << a << std::endl;
	}
	else if (b % a == 0 && b % c == 0)
	{
		std::cout << b << std::endl;
	}
	else if (c % a == 0 && c % b == 0)
	{
		std::cout << c << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return 0;
}
