#include <iostream>
using namespace std;

int main() {
    string s; int c = 1;
    while(cin >> s) {
        if(s == "#") break;
        if(s == "HELLO") printf("Case %d: ENGLISH\n", c);
        else if(s == "HOLA") printf("Case %d: SPANISH\n", c);
        else if(s == "HALLO") printf("Case %d: GERMAN\n", c);
        else if(s == "BONJOUR") printf("Case %d: FRENCH\n", c);
        else if(s == "CIAO") printf("Case %d: ITALIAN\n", c);
        else if(s == "ZDRAVSTVUJTE") printf("Case %d: RUSSIAN\n", c);
        else printf("Case %d: UNKNOWN\n", c);
        c++;
    }
    return 0;
}