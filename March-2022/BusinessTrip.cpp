#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	ll k;
	ll arr[12];
	cin >> k;
	for(ll i=0; i < 12; i++) 
		cin >> arr[i];
	ll arrLength = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+arrLength, greater<ll>());
	ll c=0;
	while(k > 0){
		k -= arr[c];
		c++;
		if(c == 13)
			break;
	}
	if(c == 13) 
		cout << -1 << endl;
	else
		cout << c << endl;
	return 0;
}
