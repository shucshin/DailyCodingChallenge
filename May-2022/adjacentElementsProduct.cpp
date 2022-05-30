#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> inputArray) {
    int max = INT_MIN;
    int n = inputArray.size();
    int product;
    for(int i = 0; i < n-1; i++) {
        product = inputArray.at(i)*inputArray.at(i+1);
        if(product > max)
            max = product;
    }
    return max;
}

int main() {
	int arr[] = {3, 6, -2, -5, 7, 3};
	int length = sizeof(arr)/sizeof(arr[0]);
	vector<int> inputArray;
	for(int i = 0; i < length; i++)
		inputArray.push_back(arr[i]);
	cout << solution(inputArray) << endl;
	return 0;
}
