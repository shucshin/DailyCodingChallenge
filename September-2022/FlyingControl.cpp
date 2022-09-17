#include <iostream>
#include <queue>
using namespace std;

int main() {
    // -1, -3, -2, -4
    queue<string> W, N, S, E;
    string str = "hello world", swtch;
    while(str != "0") {
        cin >> str;
        if(str == "0")
            break;
        if(str == "-1" || str == "-2" || str == "-3" || str == "-4") {
            swtch = str;
        }
        else {
            if(swtch == "-1") 
                W.push(str);
            if(swtch == "-3")
                N.push(str);
            if(swtch == "-2")
                S.push(str);
            if(swtch == "-4")
                E.push(str);
        }
    }
    while(!W.empty() || !N.empty() || !S.empty() || !E.empty()) {
        if(!W.empty()) {
            if(W.size() == 1 && N.empty() && S.empty() && E.empty()) {
                cout << W.front() << endl;
                W.pop();
                break;
            }
            cout << W.front() << " ";
            W.pop();
        }
        if(!N.empty()) {
            if(N.size() == 1 && W.empty() && S.empty() && E.empty()) {
                cout << N.front() << endl;
                N.pop();
                break;
            }
            cout << N.front() << " ";
            N.pop();
        }
        if(!S.empty()) {
            if(S.size() == 1 && N.empty() && W.empty() && E.empty()) {
                cout << S.front() << endl;
                S.pop();
                break;
            }
            cout << S.front() << " ";
            S.pop();
        }
        if(!E.empty()) {
            if(E.size() == 1 && N.empty() && S.empty() && W.empty()) {
                cout << E.front() << endl;
                E.pop();
                break;
            }
            cout << E.front() << " ";
            E.pop();
        }
    }
    return 0;
}