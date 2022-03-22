#include <iostream>
using namespace std;
using ld = long double;

int main() {
	ld hours, speed;
	cin >> hours >> speed;
	ld ans = speed/12 * hours;
	printf("%.3Lf\n", ans);
	return 0;
}
