#include <iostream>

using namespace std;

int solution(string s1, string s2) {
    int count = 0;
    for(int i = 0; i < s1.length(); i++) {
        for(int j = 0; j < s2.length(); j++) {
            if(s1[i] == s2[j]) {
                count++;
                s2[j] = '0';
                break;
            }
        }
    }
    return count;
}

int main() {
    string s1 = "aabcc", s2 = "adcaa";
    cout << solution(s1, s2) << endl;

    return 0;
}