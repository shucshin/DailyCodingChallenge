#include <iostream>

using namespace std;

int boring(int x) {
    int ans = 1;
    if(x%10 != 1)
        ans += ((x%10)-1) * 10;
    if(x > 10)
        ans+=2;
    if(x > 100)
        ans+=3;
    if(x > 1000)
        ans+=4;
    return ans; 
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int x;
        cin >> x;
        cout << boring(x) << endl;
    }
}