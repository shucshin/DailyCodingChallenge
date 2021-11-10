#include<iostream>

using namespace std;

int main()
{
    long long t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        int ans = ((n*m)/2);
        if((n*m)%2 != 0)
            ans++;
        cout << ans << endl;
    }
    return 0;
}