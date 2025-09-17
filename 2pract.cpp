#include <iostream>
#include <iomanip>
using namespace std;
// Функция для вычисления общей зарплаты
void CalculateTotalZP (double hours, double payment, double prem_percent) {
    double base_ZP = hours * payment;
    double prem = base_ZP * (prem_percent / 100);
    return base_ZP + prem;
}
// Функция для вычисления подоходного налога (пусть будет 13 %)
void CalculateNalog (double TotalZP) {
    return TotalZP * 0.13;
}
// Функция для вычисления суммы на руки
void CalculateHandZP (double TotalZP) {
    double Nalog = CalculateNalog (TotalZP);
    return TotalZP - Nalog;
}
int main() {
    double hours, payment, prem_percent;
    
    cout << "Введите количество отработанных часов: ";
    cin >> hours;
    
    cout << "Введите ставку почасовой оплаты (руб./час): ";
    cin >> payment;
    
    cout << "Введите процент премии: ";
    cin >> prem_percent;

    // Используем функции
    double TotalZP = CalculateTotalZP (hours, payment, prem_percent);
    double Tax = CalculateNalog (TotalZP);
    double Net_ZP = CalculateHandZP (TotalZP);

    cout << "Отработано часов: " << hours << endl;
    cout << "Ставка почасовой оплаты (руб./час): " << payment << "руб/час" << endl;
    cout << "Процент премии: " << prem_percent << endl;
    cout << "Общая зарплата: " << TotalZP << "руб" << endl;
    cout << "Подоходный налог (13%): " << Tax << " руб." << endl;
    cout << "Сумма на руки: " << Net_ZP << "руб" << endl;
    return 0;
}