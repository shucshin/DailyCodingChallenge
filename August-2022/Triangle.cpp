#include <iostream>
using namespace std;

int main() {
	float A, B, C;
	cin >> A >> B >> C;
	if(A+B > C && B+C > A && A+C > B) {
		printf("Perimetro = %.1f\n", A+B+C); 
	}
	else {
		printf("Area = %.1f\n", (A+B)*C/2);
	}
	return 0;
}
