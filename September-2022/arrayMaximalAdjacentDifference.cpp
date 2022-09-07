#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int solution(vector<int> inputArray) {
    int ans = 0;
    for(int i = 0; i < inputArray.size()-1; i++) {
        int diff = abs(inputArray[i]-inputArray[i+1]);
        if(diff > ans)
            ans = diff;
    }
    return ans;
}

int main() {
    vi inputArray = {2, 4, 1, 0};
    cout << solution(inputArray) << endl;
    return 0;
}