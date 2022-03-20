#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;

int main() {
	ll a,b,c;
	cin >> a >> b >> c;
	ll maior = max(max(a,b),c);
	cout << maior << " eh o maior\n";
	return 0;
}
