#include <iostream>

int main(void)
{
	int n;

	std::cin >> n;
	std::cout << n / 100000 % 10 << std::endl;

	return 0;
}
