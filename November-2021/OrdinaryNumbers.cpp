#include<iostream>

using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        long long temp = n, ans = 0, tens = 0;
        while(n > 9) {
            n /= 10;
            ans += 9;
            tens++;
        }
        ans += n;
        long long exp = 10, aux = n;

        for(int j = 0; j < tens; j++) {
            aux *= exp;
            n += aux;
        }
        if(n > temp)
            ans--;
        cout << ans << endl;
    }
    return 0;
}

