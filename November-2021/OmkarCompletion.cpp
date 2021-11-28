#include<iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int nums[n];
        for(int j = 0; j < n; j++) {
            if(j == n-1) {
                cout << 500 << endl;
                break;
            }
            cout << 500 << " ";
        }
    }
    return 0;
}