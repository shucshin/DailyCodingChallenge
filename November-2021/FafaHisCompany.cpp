#include<iostream>

using namespace std;

int main()
{
    long long n, ans = 0;
    cin >> n;
    for(long long l = 1; l <= (n/2); l++) {
        if((n-l)%l == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}