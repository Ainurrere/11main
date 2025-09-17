#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Функция для расчета заработной платы 
double calculate_ZP(double hours, double payment) {
    return (hours * payment);
}

int main () {
    double hours1, payment1, hours2, payment2, hours3, payment3, hours4, payment4, hours5, payment5;
    setlocale(LC_ALL, "RU");

    cout << "Первый сотрудник: " << endl;
    cout << "Введите количество часов: ";
    cin >> hours1;
    cout << "Введите ставку оплаты (руб./час): ";
    cin >> payment1;
    cout << "==================================" << endl;
    cout << "Второй сотрудник: " << endl;
    cout << "Введите количеств часов: ";
    cin >> hours2;
    cout << "Введите ставку оплаты (руб./час): ";
    cin >> payment2;
    cout << "==================================" << endl;
    cout << "Третий сотрудник:" << endl;
    cout << "Введите количеств часов: ";
    cin >> hours3;
    cout << "Введите ставку оплаты (руб./час): ";
    cin >> payment3;
    cout << "==================================" << endl;
    cout << "Четвертый сотрудник:" << endl;
    cout << "Введите количеств часов: ";
    cin >> hours4;
    cout << "Введите ставку оплаты (руб./час): ";
    cin >> payment4;
    cout << "==================================" << endl;
    cout << "Пятый сотрудник:" << endl;
    cout << "Введите количеств часов: ";
    cin >> hours5;
    cout << "Введите ставку оплаты (руб./час): ";
    cin >> payment5;

    // Зарплата первого
    double ZP1 = calculate_ZP (hours1, payment1);

    // Зарплата второго
    double ZP2 = calculate_ZP (hours2, payment2);

    // Зарплата третьего
    double ZP3 = calculate_ZP (hours3, payment3);

    // Зарплата четвертого
    double ZP4 = calculate_ZP (hours4, payment4);

    // Зарплата пятого
    double ZP5 = calculate_ZP (hours5, payment5);

    // Средняя зарплата
    double ZP = (ZP1 + ZP2 + ZP3 + ZP4 + ZP5) / 5;

    cout << "=================================" << endl;
    cout << "Результаты расчета: " << endl;
    cout << "Зарплата первого сотрудника: " << ZP1 << endl ;
    cout << "Зарплата второго сотрудника: " << ZP2 << endl;
    cout << "Зарплата третьего сотрудника:" << ZP3 << endl;
    cout << "Зарплата четвертого сотрудника: " << ZP4 << endl;
    cout << "Зарплата пятого сотрудника: " << ZP5 << endl;
    cout << "Средняя зарплата: " << ZP << endl;

    return 0;
}