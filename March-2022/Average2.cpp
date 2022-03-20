#include <iostream>
using namespace std;
using ld = long double;

int main() {
	ld A,B,C;
	cin >> A >> B >> C;
	ld ans = A*0.2 + B*0.3 + C*0.5;
	printf("MEDIA = %0.1Lf\n", ans);
	return 0;
}
