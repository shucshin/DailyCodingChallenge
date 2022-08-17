#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
typedef double d;
typedef vector<double> vd;

int main() {
	d first, second, third;
	vd nums;
	cin >> first >> second >> third;
	nums.push_back(first);
	nums.push_back(second);
	nums.push_back(third);
	sort(nums.begin(), nums.end());
	d A = nums[2], B = nums[1], C = nums[0];	

	if(A >= B+C) {
		cout << "NAO FORMA TRIANGULO\n";
		return 0;
	}
	if(A*A == B*B + C*C)
		cout << "TRIANGULO RETANGULO\n";
	if(A*A > B*B + C*C)
		cout << "TRIANGULO OBTUSANGULO\n";
	if(A*A < B*B + C*C)
		cout << "TRIANGULO ACUTANGULO\n";
	if(abs(A-B) < 1e-9 && abs(B-C) < 1e-9)
		cout << "TRIANGULO EQUILATERO\n";
	if((abs(A-B) < 1e-9 && A!=C) || (abs(B-C) < 1e-9 && A!=B) || (abs(A-C) < 1e-9 && B!=C))
		cout << "TRIANGULO ISOSCELES\n";
	return 0;
}
