#include <iostream>
#include <vector>
using namespace std;

bool solution(string inputString) {
    int impar = 0;
    sort(inputString.begin(), inputString.end());
    bool chance = true;
    for(int i = 0; i < inputString.length(); i+=2) {
        if(inputString[i] == ' ') {
            i--;
            continue;
        }
        if(inputString[i] != inputString[i+1]) {
            if(chance) {
                chance = false;
                i--;
                continue;
            }
            impar++;
        }
    }
    /*if(inputString.length()%2 != 0)
        impar--;*/
    if(impar < 1)
        return true;
    else
        return false;
}

int main() {
    string s = "aabcc";
    cout << solution(s) << endl;
    string s1 = "acbca";
    cout << solution(s1) << endl;
    string s2 = "abcbc";
    cout << solution(s2) << endl;
    string s3 = "abcad";
    cout << solution(s3) << endl;
    return 0;
}