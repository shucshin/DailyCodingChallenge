#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool solution(string inputString) {
    regex a("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
    return regex_match(inputString, a);
}

int main() {
    string s1 = "172.16.254.1", s2 = "172.316.254.1", s3 = ".254.255.0";
    cout << solution(s1) << endl;
    cout << solution(s2) << endl;
    cout << solution(s3) << endl;
    return 0;
}