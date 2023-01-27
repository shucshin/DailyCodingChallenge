#include <iostream>
using namespace std;

int main() {
    int n, s; cin >> n >> s;
    cout << s/n + (s%n==0 ? 0 : 1) << endl;
    return 0;
}