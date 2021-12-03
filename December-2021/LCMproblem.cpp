#include<iostream>

using namespace std;

int main()
{
    long long t, l, r;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> l >> r;
        if(2*l <= r)
            printf("%llu %llu\n", l, l*2);
        else
            printf("-1 -1\n");
    }
    return 0;
}