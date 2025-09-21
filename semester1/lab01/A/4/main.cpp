#include <iostream>

int main(void)
{
	int n, s = 1;

	std::cin >> n;

	s *= n % 10;
	n /= 10;
	s *= n % 10;
	n /= 10;
	s *= n % 10;
	n /= 10;

	std::cout << s << std::endl;

	return 0;
}
