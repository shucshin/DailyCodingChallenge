#include <iostream>
#include <cmath>
#include <stack>
#include <vector>
#include <iterator>
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
        for(int i = 0; i < asteroids.size(); i++) {
            if(stk.empty()) {
                stk.push(asteroids[i]);
                continue;
            }
            int inc = asteroids[i];
            // Incoming asteroid is positive
            if(inc > 0) {
                stk.push(inc);
            }
            // Incoming asteroid is negative
            else {
                int top = stk.top();
                // Top of stack is positive so they collide
                if(top > 0) {
                    // Top of stack is more powerful so we move on
                    if(top > abs(inc)) {
                        continue;
                    } // Top of stack has same magnitude so both get destroyed
                    if(top == abs(inc)) {
                        stk.pop();
                        continue;
                    }
                    else {
                        bool put = false;
                        while(!stk.empty()) {
                            int top = stk.top();
                            // No more elements in stack to collide or next one to collide is negative to we just add up
                            if(stk.empty() || top < 0) {put = true; break;}
                            // Top is bigger so incoming one gets destroyed
                            if(top > abs(inc)) {put = false; break;}
                            // Top is smaller so it gets destroyed and we keep on going
                            if(top < abs(inc)) {put = true; stk.pop();} 
                            if(top == abs(inc)) {put = false; stk.pop(); break;}
                        }
                        if(put) stk.push(inc);
                    }
                }
                // Top is stack is negative to it just adds up
                else {
                    stk.push(inc);
                }
            }
        }
        vector<int> ans;
        vector<int>::iterator it = ans.begin();
        while(!stk.empty()) {
            ans.insert(it,stk.top());
            stk.pop();
            it = ans.begin();
        }
        return ans;
    }
};

int main() {
    vector<int> asteroids1 = {5, 10, -5}, asteroids2 = {8, -8}, asteroids3 = {10, 2, -5}, asteroids4 = {-2, -2, 1, -2};
    vector<int> asteroids5 = {5, 10, -5, 5, -100}, asteroids6 = {-5, -4, -3, 100, 50, -100, 200, 150, 1, -3};
    Solution sol;
    printVector(sol.asteroidCollision(asteroids1));
    printVector(sol.asteroidCollision(asteroids2));
    printVector(sol.asteroidCollision(asteroids3));
    printVector(sol.asteroidCollision(asteroids4));
    printVector(sol.asteroidCollision(asteroids5));
    printVector(sol.asteroidCollision(asteroids6));
    return 0;
}