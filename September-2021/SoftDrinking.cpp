#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int a = min(drink, lime);
    int ans = min(a, salt)/n;
    cout << ans << endl;
}