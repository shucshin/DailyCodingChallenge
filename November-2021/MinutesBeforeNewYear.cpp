#include<iostream>

using namespace std;

int main()
{
    int t, h, m;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> h >> m;
        int minutes = (h*60) + m;
        int ans = 1440 - minutes;
        cout << ans << endl;
    }
    return 0;
}