#include<iostream>

using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    for(long long i = 0; i < t; i++) {
        cin >> n;
        if(n%4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}