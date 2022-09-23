#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, r;
    for(int i = 0; i < n; i++) {
        cin >> r;
        if(r > ans)
            ans = r;
    }
    cout << ans << endl;
    return 0;
}