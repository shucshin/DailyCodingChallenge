#include <iostream>

using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> m;
        if(n == 1)
            cout << 0 << endl;
        else if(n == 2)
            cout << m << endl;
        else 
            cout << m*2 << endl;
    }
    return 0;
}