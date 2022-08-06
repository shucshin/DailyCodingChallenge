#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> inputArray) {
	int max = 0;
    for(int i = 0; i < inputArray.size(); i++) {
		if(inputArray[i].length() > max) 
			max = inputArray[i].length();
	}
	for(int i = 0; i < inputArray.size(); i++) {
		if(inputArray[i].length() != max) {
			inputArray.erase(inputArray.begin()+i);
			i--;
		}
	}
	return inputArray;
}

int main() {
	vector<string> inputArray = {"aba", "aa", "ad", "vcd", "aba"};
	vector<string> outputArray = solution(inputArray);
	for(auto it = outputArray.begin(); it != outputArray.end(); it++)
		cout << *it << ' ';
	return 0;
}
