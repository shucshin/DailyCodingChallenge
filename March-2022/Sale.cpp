#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    ll n,m;
    cin >> n >> m;
    ll arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr,arr+n);
    ll ans = 0;
    for(int i = 0; i < m; i++) {
	if(arr[i] > 0)
    		continue;		
        ans += arr[i];
	}
    cout << abs(ans) << endl;
    return 0;
}
