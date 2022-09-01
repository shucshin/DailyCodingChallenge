#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    int la = a.size(), lb = b.size();
    string ans = a+b;
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    cout << la << " " << lb << endl;
    cout << ans << endl;
    cout << a << " " << b << endl;
    return 0;
}