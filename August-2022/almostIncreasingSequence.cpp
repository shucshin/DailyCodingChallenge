#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int> sequence) {
    vector<int>::iterator it;
    for(int i = 0; i < sequence.size()-1; i++) {
        if(sequence[i] >= sequence[i+1]) {
            it = sequence.begin()+i;
            if(i == 0)
                it = sequence.begin();
            if(i == sequence.size()-2)
                it = sequence.end()-1;
            if(sequence[i-1] == sequence[i+1])
                it++;
            sequence.erase(it);
            break;
        }
    }
    for(int i = 0; i < sequence.size()-1; i++) {
        if(sequence[i] >= sequence[i+1])
            return false;
    }
    return true;
}


int main() {
	int arr1[] = {10, 1, 2, 3, 4, 5};
	int arr2[] = {3, 5, 67, 98, 3};
	int arr3[] = {1, 2, 3, 4, 3, 6};
	vector<int> inputArr1, inputArr2, inputArr3;
	int length1 = sizeof(arr1)/sizeof(arr1[0]);
	int length2 = sizeof(arr2)/sizeof(arr2[0]);
	int length3 = sizeof(arr3)/sizeof(arr3[0]);
	for(int i = 0; i < length1; i++)
		inputArr1.push_back(arr1[i]);
	for(int i = 0; i < length2; i++)
		inputArr2.push_back(arr2[i]);	
	for(int i = 0; i < length3; i++)
		inputArr3.push_back(arr3[i]);
	cout << solution(inputArr1) << endl;
	cout << solution(inputArr2) << endl;
	cout << solution(inputArr3) << endl;
	return 0;
}
