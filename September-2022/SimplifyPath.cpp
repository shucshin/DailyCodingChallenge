#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string s;
        stack<string> stk;
        while(!ss.eof()) {
            getline(ss, s, '/');
            if(s.length() < 1)
                continue;
            stk.push(s);
        }
        string ans = "";
        int twoDots = 0;
        while(!stk.empty()) {
            if(stk.top() == ".") {
                stk.pop();
            }
            else if(stk.top() == "..") {
                twoDots++;
                stk.pop();
            }
            else {
                if(twoDots > 0) {
                    twoDots--;
                    stk.pop();
                    continue;
                }
                ans.insert(0, stk.top());
                ans.insert(0, "/");
                stk.pop();
            }
        }
        if(ans.length() < 1) ans += "/";
        return ans;
    }
};

int main() {
    string path1 = "/home/", path2 = "/../";
    string path3 = "/home//foo/", path4 = "/a/./b/../../c/";
    string path5 = "/a//b////c/d//././/..", path6 = "/../lGyI/";
    Solution solution;
    cout << solution.simplifyPath(path1) << endl;
    cout << solution.simplifyPath(path2) << endl;
    cout << solution.simplifyPath(path3) << endl;
    cout << solution.simplifyPath(path4) << endl;
    cout << solution.simplifyPath(path5) << endl;
    cout << solution.simplifyPath(path6) << endl;
    return 0;
}