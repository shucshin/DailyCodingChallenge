#include<iostream>

using namespace std;

bool isPrime(int n) {
    if(n%2 == 0)
        return false;
    for(int i = 3; i < n; i++) {
        if(n%i == 0)
            return false;
    }
    return true;
}

int nextPrime(int n) {
    n++;
    while(isPrime(n) == false) {
        n++;
    }
    return n;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if(nextPrime(n) == m)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}