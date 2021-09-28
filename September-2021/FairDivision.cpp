#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for(int i = 0; i < t; i++) {
        int a1 = 0, a2 = 0;
        cin >> n;
        for(int j = 0; j < n; j++) {
            int b;
            cin >> b;
            if(b == 1)
                a1++;
            else
                a2++;
        }
        if(a1%2 == 0 && a2%2 == 0)
            cout << "YES\n";
        else if(a1%2 == 0 && a2%2 != 0 && a1>0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}