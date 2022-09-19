#include <iostream>
#include <queue>
#include <string>
#include <tuple>
using namespace std;

struct compare {
    int operator() (const tuple<string, int>& t1, const tuple<string, int>& t2) {
        if(get<1>(t1) == get<1>(t2)) 
            return get<0>(t1) >= get<0>(t2);
        return get<1>(t1) < get<1>(t2);
    }
};

void printQueue(priority_queue<tuple<string, int>, 
    vector<tuple<string, int> >,compare> q, int times) {
    if(q.empty()) return;
    else {
        int n = q.size()/3;
        int s = q.size();
        priority_queue<tuple<string, int>, 
        vector<tuple<string, int> >,compare> r;
        cout << "Time " << times << endl;
        for(int i = 0; i < s; i++) {
            if(i%n == 0) {
                tuple<string, int> t = q.top();
                cout << get<0>(t) << " " << get<1>(t) << endl;
                q.pop();
            }
            else {
                r.push(q.top());
                q.pop();
            }
        }
        cout << endl;
        printQueue(r, ++times);
    }
}

int main() {
    int n;
    cin >> n;
    priority_queue<tuple<string, int>, 
    vector<tuple<string, int> >,compare> q;
    string s; int a;
    for(int i = 0; i < n; i++) {
        cin >> s >> a;
        tuple<string, int> t = make_tuple(s, a);
        q.push(t);
    }
    printQueue(q, 1);
    return 0;
}