#include <iostream>
#include <string.h>

using namespace std;

bool suspicious(int n, string s) {
    for(int i = 0; i < n-1; i++) {
        if(s[i] != s[i+1])
            for(int j = i+1; j < n; j++) {
                if(s[i] == s[j])
                    return false;
            }
    }
    return true;
}

int main()
{
    int t, n;
    string s;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> s;
        if(suspicious(n, s) == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}