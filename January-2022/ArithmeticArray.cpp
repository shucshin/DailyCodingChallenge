#include <iostream>

using namespace std;

int main() 
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int total = 0;
        int a = 0;
        for(int j = 0; j < n; j++) {
            cin >> a;
            total += a;
        }
        if(total == n)
            cout << 0 << endl;
        else if(total < n)
            cout << 1 << endl;
        else
            cout << total - n << endl;
    }
    return 0;
}