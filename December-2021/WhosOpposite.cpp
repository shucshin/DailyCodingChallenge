#include<iostream>

using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        int diff = abs(a-b);
        if(c > diff*2 || (a > diff && b > diff)) {
            cout << -1 << endl;
            continue;
        }
        if(c <= diff)
            cout << c + diff << endl;
        else
            cout << c - diff << endl;
    }
    return 0;
}