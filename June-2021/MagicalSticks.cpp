#include <iostream>

using namespace std;

int sticks(int n) {
    int a = n/2;
    if(n%2 == 1)
        a++;
    return a;
}

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        cout << sticks(n) << endl;
    }
}