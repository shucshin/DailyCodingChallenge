#include <iostream>
using namespace std;

int main()
{
    int n, m, a, entered = 0, ans;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a;
        entered += a;
        if(entered > n) {
            ans = m-i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}