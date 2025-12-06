#include <iostream>
using namespace std;

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

void print_menu() {
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
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

        if (choice == 1 || choice == 2) {
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;

            if (choice == 1) {
                result = sum(num1, num2);
            }
            else if (choice == 2) {
                result = subtract(num1, num2);
            }

            cout << "Результат: " << result << endl;
        }

    } while (choice != 0);

    return 0;
}