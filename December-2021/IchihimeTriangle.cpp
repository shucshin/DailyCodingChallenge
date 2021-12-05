#include<iostream>

using namespace std;

int main()
{
    long long t, a, b, c, d;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c >> d;
        printf("%llu %llu %llu\n", b, c, c);
    }
    return 0;
}