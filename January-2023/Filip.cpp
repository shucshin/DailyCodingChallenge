#include <iostream>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    int x = ((int)a[2]-'0')*100 + ((int)a[1]-'0')*10 + ((int)a[0]-'0');
    int y = ((int)b[2]-'0')*100 + ((int)b[1]-'0')*10 + ((int)b[0]-'0');
    cout << max(x,y) << endl;
    return 0;
}