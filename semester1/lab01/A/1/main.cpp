#include <iostream>

int main(void)
{
	int a, b, c;

	std::cout << "Ввод: ";
	std::cin >> a >> b >> c;
	std::cout << "Вывод: " << a + b + c << ' ' << a * b * c << std::endl;

	return 0;
}
