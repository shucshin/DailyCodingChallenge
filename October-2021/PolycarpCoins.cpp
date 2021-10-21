#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, c1, c2, a, b;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        if(n%3 == 0){
            c1 = c2 = n/3;
            cout << c1 << " " << c2 << "\n";
        }
        else{
            a = n/3;
            c1 = c2 = a;
            b = a + 2*a;
            if(n - b == 1) 
                c1++;
            else
                c2++;
            cout << c1 << " " << c2 << "\n";
        }
    }
    return 0;
}
