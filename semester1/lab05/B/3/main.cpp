#include <iostream>
#include <vector>
#include <cmath>
#include <cfloat>
#include <cassert>

const double EPS = 1e-6;

double dist(double x_a, double y_a, double x_b, double y_b)
{
	return std::sqrt((x_b - x_a) * (x_b - x_a) + (y_b - y_a) * (y_b - y_a));
}

double solve(std::vector<double> a, std::vector<double> b)
{
	auto size = a.size();
	double ret = DBL_MAX;

	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			double distance = dist(a[i], b[i], a[j], b[j]);

			if (distance < ret)
			{
				ret = distance;
			}
		}
	}

	return ret;
}

//!здесь все числа вещественные!
//при сравнении двух вещ. чисел на равенство мы сравниваем их разницу
//с маленькой константой EPS

int main(void)
{
#ifdef NDEBUG

	std::vector<double> x, y;

	x = std::vector<double>({0, -50});
	y = std::vector<double>({50, 0});

	std::cout << solve(x, y) << std::endl;
	std::cout << dist(1, 1, 2, 2) << std::endl;

#else

    {
        std::vector<double> x, y;

        x = std::vector<double>({5,4,3,2,1});
        y = std::vector<double>({5,4,3,2,1});
        assert(std::abs(solve(x, y) - 1.41421356237) < EPS);

        x = std::vector<double>({0, -50});
        y = std::vector<double>({50, 0});
        assert(std::abs(solve(x, y) - 70.7106781187) < EPS);

        x = std::vector<double>({2, 11.11, 10.5, 5, 3, 0});
        y = std::vector<double>({6, -3.14, 0.92, 6, 1, 0});
        assert(std::abs(solve(x, y) - 3.0) < EPS);

		std::cout << "SUCCESS 1!" << std::endl;
    }

    {
        std::vector<double> x, y;

        x = std::vector<double>({0, -50});
        y = std::vector<double>({50, 0});
        assert(std::abs(solve(x, y) - 70.7106781187) < EPS);

        x = std::vector<double>({2, 11.11, 10.5, 5, 3, 0});
        y = std::vector<double>({6, -3.14, 0.92, 6, 1, 0});
        assert(std::abs(solve(x, y) - 3.0) < EPS);

		std::cout << "SUCCESS 2!" << std::endl;
    }

#endif
}
