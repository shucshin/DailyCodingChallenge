#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int solution(vector<int> inputArray) {
    int ans = 0;
    for(int i = 0; i < inputArray.size()-1; i++)
        if(inputArray[i] >= inputArray[i+1]) {
            int moves = inputArray[i]-inputArray[i+1]+1;
            inputArray[i+1] += moves;
            ans += moves;
        }
    return ans;
}

int main() {
    vi arr = {2, 3, 3, 5, 5, 5, 4, 12, 12, 10, 15};
    cout << solution(arr) << endl;
    return 0;
}