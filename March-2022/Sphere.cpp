#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	ll R;
	cin >> R;
	//ld pi = M_PI;
	ld pi = 3.14159;
	ll r3 = pow(R,3);
	ld volume = (4.0/3.0)*pi*r3;
	printf("VOLUME = %.3Lf\n", volume);
	return 0;
}
