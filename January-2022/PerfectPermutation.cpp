#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1)
        cout << -1 << endl;
    else if(n%2 == 0) {
        for(int i = n; i > 0; i--) {
            if(i == 1) {
                cout << i << "\n";
                continue;
            }
            cout << i << " "; 
        }
    }
    else 
        cout << -1 << endl;
    return 0;
}