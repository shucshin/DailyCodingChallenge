#include <iostream>
#include <math.h>
using namespace std;
using ld = long double;

int main() {
	ld x1, y1, x2, y2, distance;
	cin >> x1 >> y1 >> x2 >> y2;
	distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	printf("%.4Lf\n", distance);
	return 0;
}
