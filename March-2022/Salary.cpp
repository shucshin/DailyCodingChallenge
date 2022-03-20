#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	ll number;
	ld hours, perHour;
	cin >> number >> hours >> perHour;
	printf("NUMBER = %lld\nSALARY = U$ %.2Lf\n", number, hours*perHour);
	return 0;
}
