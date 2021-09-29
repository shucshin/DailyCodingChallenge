#include <iostream>

using namespace std;

int main()
{
    int t, w, h, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> w >> h >> n;
        int pieces = 1;
        if(w%2 == 0)
            pieces *= w;
        if(h%2 == 0)
            pieces *= h;
        int ans = 1;
        while(pieces % 2 == 0){
            pieces /= 2;
            ans *= 2;
        }
        if(ans % n == 0 || n == 1 || ans > n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}