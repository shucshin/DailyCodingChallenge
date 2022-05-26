#include <iostream>
using namespace std;

bool solution(string inputString) {
    string s = inputString;
    int n = inputString.length();
    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-1-i])
            return false;
    }
    return true;
}

int main() {
	string inputString = "aabaa";
	string inputString2 = "abac";
	cout << solution(inputString) << endl;
	cout << solution(inputString2) << endl;
	return 0;
}
