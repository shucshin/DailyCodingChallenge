#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        cout << n/2 << endl;
    }
    return 0;
}