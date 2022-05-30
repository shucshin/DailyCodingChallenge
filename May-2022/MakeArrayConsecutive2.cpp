#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> statues) {
    int min = *min_element(statues.begin(), statues.end());
    int max = *max_element(statues.begin(), statues.end());
    int n = 0;
    vector<int>::iterator it;
    for(int i = min; i < max; i++) {
        it = find(statues.begin(), statues.end(), i);
        if(it == statues.end())
            n++;
    }
    return n;
}

int main() {
	int arr[] = {6, 2, 3, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> statues;
	for(int i = 0; i < n; i++)
		statues.push_back(arr[i]);
	cout << solution(statues) << endl;
	return 0;
}
