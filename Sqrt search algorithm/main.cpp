#include <iostream>
double SSA(double);

using namespace std;
int main() {
	cout << "Sqrt(25): "  << SSA(25) << "\n"
             << "Sqrt(11): "  << FAS(11) << "\n"
	     << "Sqrt(31): "  << SSA(31) << "\n"
	     << "Sqrt(46): "  << SSA(46) << "\n"
             << "Sqrt(64): "  << FAS(64) << "\n"
	     << "Sqrt(72): "  << SSA(72) << "\n";
	return 0;
}

double SSA(double value) {
	double result = 0.0;
	for (int i = 1; i <= 200; i++)
		result -= (result * result - value) / (2 * value);
	return result;
}
