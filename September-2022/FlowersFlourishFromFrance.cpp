#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
typedef vector<string> vs;

void solve(string s) {
    stringstream ss(s);
    vs vec;
    while(ss >> s) {
        vec.push_back(s);
    }
    string first = vec[0];
    char c = tolower(first[0]);
    for(int i = 1; i < vec.size(); i++) {
        string comp = vec[i];
        char cc = tolower(comp[0]);
        if(c != cc) {
            cout << "N\n";
            return;
        }
    }
    cout << "Y\n";
}

int main() {
    string s = "0";
    getline(cin, s);
    while(s != "*") {
        solve(s);
        getline(cin, s);
    }
    return 0;
}