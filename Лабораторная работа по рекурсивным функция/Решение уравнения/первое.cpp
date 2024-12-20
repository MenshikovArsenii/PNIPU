#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

double uravnenie(double a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		int c = 1;
		for (int i = 1; i <= (2*b+1); i++) {
			c *= i;
		}
		return(pow(a,2*b+1)/c+uravnenie(a,b-1));
	}
}

int main() {
	double x;
	int n;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите начальное значение x и n: ";
	cin >> x >> n;
	if (n < 0) 
		cout << "ќшибка";
	else 
		cout << uravnenie(x, n);
}

