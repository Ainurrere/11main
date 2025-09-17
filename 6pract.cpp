#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Функция для расчета заработной платы для первого сотрудника
void calculate_ZP1(double hours1, double payment1, double prem_percent1,
                    double& total_ZP1, double& nalog1, double& net_ZP1) {
    // Расчет базовой оплаты
    double base_ZP1 = hours1 * payment1;
    
    // Расчет премии
    double prem1 = base_ZP1 * (prem_percent1 / 100.0);

    // Общая заработанная сумма
    total_ZP1 = base_ZP1 + prem1;
    
    // Сумма подоходного налога 13%
    nalog1 = total_ZP1 * 0.13;
    
    // Сумма на руки (за вычетом налога)
    net_ZP1 = total_ZP1 - nalog1;
}

// Функция для расчета заработной платы второго сотрудника
void calculateZP2(double hours2, double payment2, double prem_percent2,
                    double& total_ZP2, double& nalog2, double& net_ZP2) {
    // Расчет базовой оплаты
    double base_ZP2 = hours2 * payment2;
    
    // Расчет премии
    double prem2 = base_ZP2 * (prem_percent2 / 100.0);

    // Общая заработанная сумма
    total_ZP2 = base_ZP2 + prem2;
    
    // Сумма подоходного налога 13%
    nalog2 = total_ZP2 * 0.13;
    
    // Сумма на руки (за вычетом налога)
    net_ZP2 = total_ZP2 - nalog2;
}

int main () {
    string surname1, surname2; 
    cout << "Введите фамилию первого сотрудника: "; 
    cin >> surname1;
    cout << "Введите фамилию второго сотрудника: ";
    cin >> surname2;

    double hours1, hours2, payment1, payment2, number1, number2, prem_percent1, prem_percent2;
    cout << "Введите номер первого сотрудника: ";
    cin >> number1;
    cout << "Введите номер второго сотрудника: ";
    cin >> number2;
    cout << "Введите количество отработанных часов первого сотрудника: ";
    cin >> hours1;
    cout << "Введите количество отработанных часов второго сотрудника: ";
    cin >> hours2;
    cout << "Введите ставку почасовой оплаты первого сотрудника: ";
    cin >> payment1;
    cout << "Введите ставку почасовой оплаты второго сотрудника: ";
    cin >> payment2;
    cout << "Введите процент премии первого сотрудника (%): ";
    cin >> prem_percent1;
    cout << "Введите процент премии второго сотрудника (%): ";
    cin >> prem_percent2; 

    // Переменные для результатов сотрудников
    double total_ZP1, nalog1, net_ZP1, total_ZP2, nalog2, net_ZP2;
    
    // Вызов функции расчета
    calculate_ZP1(hours1, payment1, prem_percent1, total_ZP1, nalog1, net_ZP1);
    calculateZP2(hours2, payment2, prem_percent2, total_ZP2, nalog2, net_ZP2);

    if (net_ZP1 < 1000){
        cout << surname1 << " получил на руки меньше 1000 руб." << endl;
    }
    if  (nalog1 > 50){
            cout << surname1.front() << "-" << surname1.back() << " имеет налог больше 50 руб." << endl;
        }
    if (net_ZP2 < 1000){
        cout << surname2 << " получил на руки меньше 1000 руб." << endl;
    }
    if (nalog2 > 50){
         cout << surname2.front() << "-" << surname2.back() << " имеет налог больше 50 руб." << endl;
    }
    

    return 0;
}