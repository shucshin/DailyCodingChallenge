#include <iostream>
#include <string>
using namespace std;

string solution(string inputString) {
    if(inputString.find('(') == string::npos)
        return inputString;
    else {
        int l = 0, r = 0;
        for(int i = 0; i < inputString.length(); i++) {
            if(inputString[i] == '(')
                l = i;
            if(inputString[i] == ')') {
                r = i;
                int c = 0;
                for(int j = l; j <= (l+r)/2; j++) {
                    char temp = inputString[j];
                    inputString[j] = inputString[r-c];
                    inputString[r-c] = temp;
                    c++;
                }
                //inputString[l] = '\0';
                //inputString[r] = '\0';
                inputString.erase(l,1);
                inputString.erase(r-1,1);
                break;
            } 
        }
        return solution(inputString);
    }
}

int main() {
    string inputString1 = "(bar)", inputString2 = "foo(bar)baz";
    string inputString3 = "foo(bar)baz(blim)", inputString4 = "foo(bar(baz))blim";
    cout << solution(inputString1) << endl << solution(inputString2) << endl;
    cout << solution(inputString3) << endl << solution(inputString4) << endl;
    return 0;
}