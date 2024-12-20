#include <iostream>
#include <clocale>
using namespace std;

int fib(int num, int x = 0, int y = 1) {
	if (num == 1)
		return x;
	if (num == 2)
		return y;
	return fib(num - 1, y, y + x);
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

