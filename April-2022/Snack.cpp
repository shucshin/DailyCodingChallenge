#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	ll x,y;
	ld ans;
	cin >> x >> y;
	switch(x) {
		case 1:
			ans = 4.00;
			break;
		case 2:
			ans = 4.50;
			break;
		case 3:
			ans = 5.00;
			break;
		case 4:
			ans = 2.00;
			break;
		case 5:
			ans = 1.50;
			break;
	}
	ans *= y;
	printf("Total: R$ %0.2Lf\n",ans);	
	return 0;
}
