#include <iostream>

int main(void)
{
	int a;

	std::cin >> a;

	switch (a)
	{
		case 0:
			std::cout << "ZERO" << std::endl;
			break;
		case 1:
			std::cout << "ONE" << std::endl;
			break;
		case 2:
			std::cout << "TWO" << std::endl;
			break;
		case 3:
			std::cout << "THREE" << std::endl;
			break;
		case 4:
			std::cout << "FOUR" << std::endl;
			break;
		case 5:
			std::cout << "FIVE" << std::endl;
			break;
		case 6:
			std::cout << "SIX" << std::endl;
			break;
		case 7:
			std::cout << "SEVEN" << std::endl;
			break;
		case 8:
			std::cout << "EIGHT" << std::endl;
			break;
		case 9:
			std::cout << "NINE" << std::endl;
			break;
		default:
			std::cout << "ERROR" << std::endl;
			break;
	}

	return 0;
}
