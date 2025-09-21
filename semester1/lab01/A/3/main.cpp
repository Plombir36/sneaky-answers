#include <iostream>
#include <cmath>

int main(void)
{
	double r, s1, s2;

	std::cin >> r;
	s1 = r * r;
	s2 = M_PI * r * r;
	std::cout << s1 + (r * r * 4 - s2) / 4 << std::endl;

	return 0;
}
