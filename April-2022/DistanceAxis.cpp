#include <iostream>
#include <cmath>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	if(n < k) {
		cout << k-n << endl;
		return;
	}
	if((n-k)%2 == 0) 
		cout << 0 << endl;	
	else
		cout << 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
