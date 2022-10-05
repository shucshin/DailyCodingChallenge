#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    cout << "[";
    for(int i = 0; i < v.size(); i++) {
        if(i == v.size() - 1) {
            cout << v[i];
            break;
        }
        cout << v[i] << ", ";
    }
    cout << "]" << endl;
}

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for(int i = asteroids.size()-1; i >= 0; i--) {
            stk.push(asteroids[i]);
        }
        vector<int> ans;
        int cur = stk.top(); stk.pop();
        while(!stk.empty()) {
            int inc = stk.top();
            if(cur < 0 && inc > 0) {
                ans.push_back(cur);
                inc = cur;
                stk.pop();
            }
            else {
                if(abs(cur) < abs(inc)) {
                    cur = inc;
                    stk.pop();
                }
                else if(abs(cur) > abs(inc)) {
                    stk.pop();
                }
                else {
                    stk.pop();
                    cur = stk.top();
                }
            }
        }
        return ans;
    }
};

int main() {
    vector<int> asteroids1 = {5, 10, -5}, asteroids2 = {8, -8}, asteroids3 = {10, 2, -5};
    vector<int> asteroids4 = {5, 10, -5, 5, -100}, asteroids5 = {-5, -4, -3, 100, 50, -100, 200, 150, 1, -3};
    Solution sol;
    printVector(sol.asteroidCollision(asteroids1));
    printVector(sol.asteroidCollision(asteroids2));
    printVector(sol.asteroidCollision(asteroids3));
    printVector(sol.asteroidCollision(asteroids4));
    printVector(sol.asteroidCollision(asteroids5));
    return 0;
}