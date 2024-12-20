#include <iostream>
#include <clocale>
using namespace std;

int fib(int num) {
	if (num == 1)
		return 0;
	if (num == 2)
		return 1;
	return fib(num - 1) + fib(num -2);
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n;
	cout << "¬ведите количество чисел ‘ибоначчи: ";
	cin >> n;
	while (n < 1) {
		cout << "¬ведите количество чисел ‘ибоначчи больше 0: ";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
		cout << fib(i) << endl;
	return 0;
}

