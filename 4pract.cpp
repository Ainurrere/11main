#include <iostream>
#include <iomanip>

using namespace std;

// Функция для расчета заработной платы
void calculateSalary(double hours, double payment, double prem_percent,
                    double& total_ZP, double& nalog, double& net_ZP) {
    // Расчет базовой оплаты
    double base_ZP = hours * payment;
    
    // Расчет премии
    double prem = base_ZP * (prem_percent / 100.0);

    // Общая заработанная сумма
    total_ZP = base_ZP + prem;
    
    // Сумма подоходного налога 13%
    nalog = total_ZP * 0.13;
    
    // Сумма на руки (за вычетом налога)
    net_ZP = total_ZP - nalog;
}

int main() {
    // Ввод данных
    double hours, payment, prem_percent;

    cout << "Введите количество отработанных часов: ";
    cin >> hours;
    
    cout << "Введите ставку почасовой оплаты (руб./час): ";
    cin >> payment;
    
    cout << "Введите процент премии (%): ";
    cin >> prem_percent;
    
    
    // Переменные для результатов
    double total_ZP, nalog, net_ZP;
    
    // Вызов функции расчета
    calculateSalary(hours, payment, prem_percent, total_ZP, nalog, net_ZP);
    
    // Вывод результатов
    cout << endl << "Результаты расчета:" << endl;
    cout << "Общая заработанная сумма: " << total_ZP << " руб." << endl;
    cout << "Сумма подоходного налога (13%): " << nalog << " руб." << endl;
    cout << "Сумма на руки: " << net_ZP << " руб." << endl;
    
    return 0;
}