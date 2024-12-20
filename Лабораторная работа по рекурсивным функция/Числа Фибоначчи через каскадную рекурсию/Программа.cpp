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
	cout << "������� ���������� ����� ���������: ";
	cin >> n;
	while (n < 1) {
		cout << "������� ���������� ����� ��������� ������ 0: ";
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
		cout << fib(i) << endl;
	return 0;
}

