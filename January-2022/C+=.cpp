#include <iostream>

using namespace std;

int main()
{
    int t, a, b, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> a >> b >> n;
        int c = 0;
        while(a <= n && b <= n) {
            if(a >= b) 
                b += a;
            else
                a += b;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}