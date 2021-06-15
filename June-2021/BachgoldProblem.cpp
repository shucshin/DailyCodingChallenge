#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n/2 << endl;
    while(n >= 2) {
        if(n == 3){
            cout << n << endl;
            break;
        }
        cout << 2 << " ";
        n -= 2;
    }
}