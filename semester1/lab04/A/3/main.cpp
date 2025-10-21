#include <iostream>
#include <cmath>
#include <cassert>

double dist(double x1, double y1, double x2, double y2)
{
	return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double solve(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double result = 0, v1, v2, v3;

	v1 = dist(x1, y1, x2, y2);
	result = v1 > result ? v1 : result;

	v2 = dist(x1, y1, x3, y3);
	result = v2 > result ? v2 : result;

	v3 = dist(x2, y2, x3, y3);
	result = v3 > result ? v3 : result;

	return v1 + v2 < v3 || v1 + v3 < v2 || v2 + v3 < v1 ? -1 : result;
}

int main(void)
{
#ifdef NDEBUG

	double x1, y1, x2, y2, x3, y3;

	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	std::cout << solve(x1, y1, x2, y2, x3, y3) << std::endl;

#else

	const double EPS = 1e-6;

	using std::abs;

	assert(abs(dist(0, 0, 1000, 0) - 1000) < EPS);
	assert(abs(dist(-5, 15, 10, -10) - 29.154759474) < EPS);
	assert(abs(dist(-12.5, 50000, 12.5, 50200) - 201.556443707) < EPS);
	assert(abs(solve(0, 0, 6, 0, 3, 2) - 6) < EPS);
	assert(abs(solve(-2, -2, -2, 4, 9, 1) - 11.401754251) < EPS);
	assert(abs(solve(1, 4, -5, -1, 0, 3) - 7.810249676) < EPS);

	std::cout << "SUCCESS 1!" << std::endl;

#warning custom tests must be done

#endif

	return 0;
}
