#include <iostream>
#include <vector>
using namespace std;
using vs = vector<string>;
#define rep(i,a,b) for(int i = a; i < b; i++)

string number(int &z, string &s1, string &s2, string &s3, string &s4, string &s5, string &s6, string &s7) {
    if(s1.substr(z,5) == ".....") return "+";
    if(s1.substr(z,5) == "....x") return "1";
    if(s1.substr(z,5) == "x...x") return "4";
    else {
        if(s4.substr(z,5) == "xxxxx") {
            // 2 3 5 6 8 9
            if(s2.substr(z,5) == "....x") {
                // 2 3
                if(s5.substr(z,5) == "x....") return "2";
                else return "3";
            }
            if(s2.substr(z,5) == "x....") {
                // 5 6
                if(s5.substr(z,5) == "....x") return "5";
                else return "6";
            }
            else {
                // 8 9
                if(s5.substr(z,5) == "x...x") return "8";
                else return "9";
            }
        }
        else {
            // 0 7
            if(s4.substr(z,5) == "....x") return "7";
        }
    }
    return "0";
}

int main() {
    string s1, s2, s3, s4, s5, s6, s7; cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7;
    int n = s1.length()/6;
    string o1 = "", o2 = "";
    bool plus = false;
    rep(i,0,n+1) {
        int z = i*5+i;
        if(number(z,s1,s2,s3,s4,s5,s6,s7) == "+") {plus = true; continue;}
        if(!plus) {
            o1 += number(z,s1,s2,s3,s4,s5,s6,s7);
        } else o2 += number(z,s1,s2,s3,s4,s5,s6,s7);
    }
    int ans = stoi(o1) + stoi(o2);
    string num = to_string(ans);
    vs v(7, "");
    rep(i,0,num.length()) {
        if((num[i]) == '0') {
            v[0] += "xxxxx";
            v[1] += "x...x";
            v[2] += "x...x";
            v[3] += "x...x";
            v[4] += "x...x";
            v[5] += "x...x";
            v[6] += "xxxxx";
        }
        if((num[i]) == '1') {
            v[0] += "....x";
            v[1] += "....x";
            v[2] += "....x";
            v[3] += "....x";
            v[4] += "....x";
            v[5] += "....x";
            v[6] += "....x";
        }
        if((num[i]) == '2') {
            v[0] += "xxxxx";
            v[1] += "....x";
            v[2] += "....x";
            v[3] += "xxxxx";
            v[4] += "x....";
            v[5] += "x....";
            v[6] += "xxxxx";
        }
        if((num[i]) == '3') {
            v[0] += "xxxxx";
            v[1] += "....x";
            v[2] += "....x";
            v[3] += "xxxxx";
            v[4] += "....x";
            v[5] += "....x";
            v[6] += "xxxxx";
        }
        if((num[i]) == '4') {
            v[0] += "x...x";
            v[1] += "x...x";
            v[2] += "x...x";
            v[3] += "xxxxx";
            v[4] += "....x";
            v[5] += "....x";
            v[6] += "....x";
        }
        if((num[i]) == '5') {
            v[0] += "xxxxx";
            v[1] += "x....";
            v[2] += "x....";
            v[3] += "xxxxx";
            v[4] += "....x";
            v[5] += "....x";
            v[6] += "xxxxx";
        }
        if((num[i]) == '6') {
            v[0] += "xxxxx";
            v[1] += "x....";
            v[2] += "x....";
            v[3] += "xxxxx";
            v[4] += "x...x";
            v[5] += "x...x";
            v[6] += "xxxxx";
        }
        if((num[i]) == '7') {
            v[0] += "xxxxx";
            v[1] += "....x";
            v[2] += "....x";
            v[3] += "....x";
            v[4] += "....x";
            v[5] += "....x";
            v[6] += "....x";
        }
        if((num[i]) == '8') {
            v[0] += "xxxxx";
            v[1] += "x...x";
            v[2] += "x...x";
            v[3] += "xxxxx";
            v[4] += "x...x";
            v[5] += "x...x";
            v[6] += "xxxxx";
        }
        if((num[i]) == '9') {
            v[0] += "xxxxx";
            v[1] += "x...x";
            v[2] += "x...x";
            v[3] += "xxxxx";
            v[4] += "....x";
            v[5] += "....x";
            v[6] += "xxxxx";
        }
        if(i != num.length()-1) {
            rep(i,0,7) {
                v[i] += ".";
            }
        }
    }
    rep(i,0,7) {
        cout << v[i] << endl;
    }

    return 0;
}