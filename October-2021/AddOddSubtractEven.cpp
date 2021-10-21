#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t, a, b;
    cin >> t;
    for(long long i = 0; i < t; i++) {
        cin >> a >> b;
        if(a == b)
            cout << 0 << "\n";
        else if(a < b) {
            if((b-a)%2 == 1)
                cout << 1 << "\n";
            else 
                cout << 2 << "\n";
        } 
        else {
            if((a-b)%2 == 0)
                cout << 1 << "\n";
            else
                cout << 2 << "\n";
        }
    }
    return 0;
}