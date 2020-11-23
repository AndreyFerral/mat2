#include <iostream>

int main() {
	double E = 0.001;
	double x0 = -1, x1 = -pow((0.2*x0*x0+0.5*x0+0.8), 1./3);
	int n = 0;
	while (fabs(x1 - x0) > E * ((1 - 0.093) / 0.093)) {
		x0 = x1;
		x1 = -pow((0.2 * x0 * x0 + 0.5 * x0 + 0.8), 1. / 3);
		n++;
		//std::cout << "xn: " << x1 << " n: " << n << " x0: " << x0 << std::endl;

	}

	std::cout << "xn: " << x1 << " n: " << n << std::endl;



	return 0;
}