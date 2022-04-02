#include <iostream>
using namespace std;
using ll = long long;

void solve() {
	ll n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;
	ll minW = a-b, maxW = a+b, minP = c-d, maxP = c+d;
	if(minW*n > maxP || maxW*n < minP)	
		cout << "No\n";
	else
		cout << "Yes\n";
}

int main() {
	ll t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
