#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s) && !s.empty() && !cin.eof()) {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V')
                s[i] = '1';
            else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' ||
                    s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z')
               s[i] = '2';
            else if(s[i] == 'D' || s[i] == 'T')
                s[i] = '3';
            else if(s[i] == 'L')
                s[i] = '4';
            else if(s[i] == 'M' || s[i] == 'N')
                s[i] = '5';
            else if(s[i] == 'R')
                s[i] = '6';
            else
                s[i] = 'A';
        }
        for(int i = 0; i < s.length()-1; i++) {
            if(s[i] == s[i+1])
                s[i] = '\0';
            else if(s[i] == 'A')
                s[i] = '\0';
        }
        if(s[s.length()-1] == 'A')
            s[s.length()-1] = '\0';
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '\0')
                continue;
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}