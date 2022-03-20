#include <iostream>
using namespace std;
using ld = long double;

int main() {
	ld A,B;
	cin >> A >> B;
	ld ans = ((A*3.5)+(B*7.5))/11;
	printf("MEDIA = %.5Lf\n", ans);
	return 0;
}
