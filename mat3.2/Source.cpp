#include <iostream>
#include <math.h>

double f(double x) {
	return tan(0.3 * x + 0.4) - x * x;
}

int main() {
	double a1 = -0.75, b1 = -0.25,
		a2 = 0.5, b2 = 1;

	double d = a1;
	double x0 = b1;
	double E = 0.001;
	int n = 0;
	double x1 = x0 - f(x0) * ((x0 - d) / (f(x0) - f(d)));
	double min = 0.834;

	while (!(fabs(f(x1)) <= E * min && fabs(x1 - x0) <= E)) {
		x0 = x1;
		x1 = x0 - f(x0) * ((x0 - d) / (f(x0) - f(d)));
		n++;
		//std::cout << "xn: " << x1 << " n: " << n << std::endl;
	}


	std::cout << "x1: " << x1 << std::endl;

	d = b2;
	x0 = a2;
	n = 0;
	x1 = x0 - f(x0) * ((x0 - d) / (f(x0) - f(d)));
	min = 1.487;
	while (!(fabs(f(x1)) <= E * min && fabs(x1 - x0) <= E)) {
		x0 = x1;
		x1 = x0 - f(x0) * ((x0 - d) / (f(x0) - f(d)));
		n++;
		//std::cout << "xn: " << x1 << " n: " << n << std::endl;
	}
	std::cout << "x2: " << x1;


	return 0;
}