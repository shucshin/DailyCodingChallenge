#include<iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if((a+b)%2 == 0)
        cout << (a+b)/2 << endl;
    else {
        float c = (a+b)/2;
        if(a+b >= 0)
            c += 0.5;
        else
            c -= 0.5;
        cout << c << endl;
    }
    return 0;
}