#include <iostream>
#include <math.h>
using namespace std;
using ld = long double;

int main() {
	ld A,B,C,pi=3.14159;
	cin >> A >> B >> C;
	ld triangle = A*C/2;
	ld circle = pi*pow(C,2);
	ld trapezium = (A+B)/2*C;
	ld square = pow(B,2);
	ld rectangle = A*B;
	printf("TRIANGULO: %.3Lf\nCIRCULO: %.3Lf\nTRAPEZIO: %.3Lf\nQUADRADO: %.3Lf\nRETANGULO: %.3Lf\n",
	triangle, circle, trapezium, square, rectangle);
	return 0;
}
