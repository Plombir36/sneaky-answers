#include <iostream>

int main(void)
{
	unsigned int a, b;

	std::cin >> a;
	b = a = a * a;
	a *= a;
	a *= a;
	b *= a;
	std::cout << b << std::endl;

	return 0;
}
