#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    for(int i = 0; i < n; i++) {
        ll maximum = max(llabs(arr[i]-arr[0]), llabs(arr[i]-arr[n-1]));
        ll minimum = LLONG_MAX;
        if(i == 0) 
            minimum = llabs(arr[i]-arr[i+1]);
        else if(i == n-1)
            minimum = llabs(arr[i]-arr[i-1]);
        else
            minimum = min(llabs(arr[i]-arr[i-1]), llabs(arr[i]-arr[i+1]));
        cout << minimum << " " << maximum << endl;
    }
}