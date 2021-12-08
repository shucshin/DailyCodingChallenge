#include<iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int a[n*2];
        int odd = 0;
        for(int j = 0; j < n*2; j++) {
            cin >> a[j];
            if(a[j]%2 != 0)
                odd++;
        }
        if(odd == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
    return 0;
}