#include <iostream>
using namespace std;

int sum(int num1, int num2, char operation) {
	if (operation == '+') {
		return num1 + num2;
	}
	else if (operation == '-') {
		return num1 - num2;
	}
	else if (operation == '*') {
		return num1 * num2;
	}
	else if (operation == '/') {
		return num1 / num2;
	}
	else if (operation == '^') {
		return num1 * num1 + num2 * num2;
	}
	else if (operation == '%') {
		return (num2 * 100) / num1;
	}
	else if (operation == '&') {
		return (num1 * num2) - (num1 + num2);
	}
	else if (operation == '$') {
		return (num1 + num2) / 76;
	}
	else {
		cout << "\x1b[93m+|\x1b[0m Функция завершила работу с кодом: \x1b[91m";
		return -1;
	}
}
int main() {
	setlocale(0, "");
	while (true) {
		cout << "\t\t\t\t         \x1b[93m Возможные действия:\x1b[0m\n";
		cout << "\t\t\t\t \x1b[93m|\x1b[0m \x1b[94m+\x1b[0m сложение" << "\t  \x1b[93m|\x1b[0m \x1b[94m-\x1b[0m вычитание\n";
		cout << "\t\t\t\t \x1b[93m|\x1b[0m \x1b[94m*\x1b[0m умножение" << "\t  \x1b[93m|\x1b[0m \x1b[94m/\x1b[0m деление\n";
		cout << "\t\t\t\t \x1b[93m|\x1b[0m \x1b[94m^\x1b[0m возведение в квадрат и сложение\n";
		cout << "\t\t\t\t \x1b[93m|\x1b[0m \x1b[94m%\x1b[0m нахождение процентов второго числа\n";
		cout << "\t\t\t\t \x1b[93m|\x1b[0m \x1b[94m&\x1b[0m разность умножения и сложения чисел\n";
		cout << "\t\t\t\t \x1b[93m|\x1b[0m \x1b[94m$\x1b[0m перевод суммы двух чисел в доллары\n\n\n";
		cout << "Введите первое число: ";
		int num1;
		cin >> num1;
		cout << "Введите второе число: ";
		int num2;
		cin >> num2;
		cout << "Введите действие: ";
		char operation;
		cin >> operation;
		cout << "\x1b[92m" << sum(num1, num2, operation) << "\x1b[0m" << endl << endl;

	}

	int _;
	cin >> _;
	return 0;
}