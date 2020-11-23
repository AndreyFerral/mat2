#include <iostream>
#include <math.h>

double f(double x) {
	return pow(x, 3) + x * 4 - 6;
}

double df(double x) {
	return 3 * pow(x, 2) + 4;
}

int main() {
	double a = 1; double b = 1.5;
	double E = 0.001;
	double min = 7;
	int n = 0;
	double x0 = a,
		x1 = x0 - f(x0) / df(x0);
	while (!(fabs(f(x1)) <= E * min && fabs(x1-x0) <= E)) {
		x0 = x1;
		x1 = x0 - f(x0) / df(x0);
		n++;
		std::cout << "xn: " << x1 << " n: " << n << std::endl;
	}
	std::cout << "xn: " << x1 << " n: " << n << std::endl;
	return 0;
}


