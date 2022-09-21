#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vi = vector<int>;

int solution(vector<int> inputArray) {
    sort(inputArray.begin(), inputArray.end());
    int ans = 1;
    bool out = false;
    while(!out) {
        out = true;
        for(int i = 0; i < inputArray.size(); i++) {
            if(inputArray[i]%ans == 0) {
                ans++;
                out = false;
                break;
            }
        }
    }
    return ans;
}
 
int main() {
    vi v = {5, 3, 6, 7, 9};
    cout << solution(v) << endl;
    return 0;
}