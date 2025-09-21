#include <iostream>
#include <string>

int main(void)
{
	std::string n1, n2, g;

	std::cout << "Введите фамилию, имя и группу: ";
	std::cin >> n1 >> n2 >> g;
	std::cout << "Здравствуйте, " << n1 << ' ' << n2 << " (" << g << ')' << std::endl;

	return 0;
}
