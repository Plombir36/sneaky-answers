#include <iostream>

int main(void)
{
	char a;

	std::cin >> a;

	if (a >= '0' && a <= '9')
	{
		std::cout << "DIGIT" << std::endl;
	}
	else if (a >= 'A' && a <= 'Z')
	{
		std::cout << "CAPITAL" << std::endl;
	}
	else if (a >= 'a' && a <= 'z')
	{
		std::cout << "LOWERCASE" << std::endl;
	}
	else
	{
		std::cout << "NON-ALPHANUMERIC" << std::endl;
	}

	return 0;
}
