#include <iostream>
using namespace std;

int solution(int year) {
	return (year-1)/100 + 1;
}

int main() {
	int year = 1905;
	cout << solution(year) << endl;
	return 0;
}
