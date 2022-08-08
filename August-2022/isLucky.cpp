#include <iostream>
using namespace std;

bool solution(int n) {
    string s = to_string(n);
    int a = 0, b = 0;
    for(int i = 0; i < s.length()/2; i++) {
        a += (int)s[i];
        b += (int)s[s.length()-i-1];
    }
    if(a == b)
        return true;
    else
        return false;
}

int main() {
    int a = 1230, b = 239017;
    cout << solution(a) << endl;
    cout << solution(b) << endl;
    return 0;
}