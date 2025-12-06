#include <iostream>
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

void print_menu() {
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите операцию: ";
}

int main() {
    setlocale(LC_ALL, "rus");
    int choice;
    double num1, num2, result;

    do {
        print_menu();
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
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
            }

            cout << "Результат: " << result << endl;
        }

    } while (choice != 0);

    return 0;
}