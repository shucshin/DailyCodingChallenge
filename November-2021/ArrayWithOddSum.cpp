#include<iostream>

using namespace std;

int main()
{
    int t, n, a;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int ans = 0;
        for(int j = 0; j < n; j++) {
            cin >> a;
            if(a%2 != 0)
                ans++;
        }        
        if(ans == 0)
            cout << "NO\n";
        else if(n%2 == 0 && ans == n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}