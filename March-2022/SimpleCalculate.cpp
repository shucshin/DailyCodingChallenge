#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
	ll code1, code2, units1, units2;
	ld price1, price2;
	cin >> code1 >> units1 >> price1 >> code2 >> units2 >> price2;
	printf("VALOR A PAGAR: R$ %.2Lf\n",units1*price1+units2*price2);
	return 0;
}
