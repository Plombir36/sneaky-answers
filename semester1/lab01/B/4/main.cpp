#include <iostream>
#include <cmath>

int main(void)
{
	int x, y, z;

	std::cin >> x >> y >> z;
	std::cout << std::pow(x, pow(y, z)) + pow(y, x + z) + pow(z, 5) << std::endl;

	return 0;
}
