#include <iostream>
#include <cmath>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

void print_menu() {
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "4. Деление" << endl;
    cout << "5. Возведение в степень" << endl;
    cout << "6. Выход" << endl;
    cout << "Выберите операцию: ";
}

int main() {
    setlocale(LC_ALL, "rus");
    int choice;
    double num1, num2, result;

    do {
        print_menu();
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;

            switch (choice) {
            case 1:
                result = sum(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                break;
            case 5:
                result = power(num1, num2);
                break;
            }

            if (!(choice == 4 && num2 == 0)) {
                cout << "Результат: " << result << endl;
            }
        }

    } while (choice != 6);

    return 0;
}