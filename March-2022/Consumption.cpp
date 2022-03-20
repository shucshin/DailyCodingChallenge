#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	ll x;
	ld y, ans;
	cin >> x >> y;
	ans = ceill((x/y)*1000)/1000;
	printf("%.3Lf km/l\n",ans);
	return 0;
}
