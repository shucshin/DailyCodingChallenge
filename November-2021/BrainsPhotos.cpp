#include<iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    string s = "#Black&White", a;
    for(int i = 0; i < n*m; i++) {
        cin >> a;
        if(a == "C" || a == "M" || a == "Y")
            s = "#Color";
    }
    cout << s << endl;
    return 0;
}