#include<iostream>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> x;
        if(n <= 2) {
            cout << 1 << endl;
            continue;
        }
        n -= 2;
        if(n <= x) 
            cout << 2 << endl;
        else if(n%x == 0) 
            cout << n/x + 1 << endl;
        else
            cout << n/x + 2 << endl;
    }
    return 0;
}