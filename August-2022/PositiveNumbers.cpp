#include <iostream>
using namespace std;
typedef double d;

int main() {
	d input;
	int positives = 0;
	for(int i = 0; i < 6; i++) {
		cin >> input;
		if(input > 0)
			positives++;
	}
	cout << positives << " valores positivos\n";
	return 0;
}
