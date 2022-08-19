#include <iostream>
using namespace std;
typedef double d;

int main() {
	d salary;
	cin >> salary;
	d original = salary;
	int increase = 0;
	if(salary >= 0 && salary <= 400.00) {
		increase = 15;
		salary *= 1.15;
	}
	else if(salary > 400.00 && salary <= 800.00) {
		increase = 12;
		salary *= 1.12;
	}
	else if(salary > 800.00 && salary <= 1200.00) {
		increase = 10;
		salary *= 1.10;
	}
	else if(salary > 1200.00 && salary <= 2000.00) {
		increase = 7;
		salary *= 1.07;
	}
	else {
		increase = 4;
		salary *= 1.04;
	}
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salary, salary-original, increase);
	return 0;
}
