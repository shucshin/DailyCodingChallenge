#include<iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if(n > m || n > k)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}