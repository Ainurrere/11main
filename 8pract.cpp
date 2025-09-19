#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество работников: ";
    cin >> n;
    
    double* hours = new double[n];
    double* rate = new double[n];
    double* bonus = new double[n];
    double* salary = new double[n];
    double* tax = new double[n];
    double* net_salary = new double[n];
    
    // Ввод данных
    for (int i = 0; i < n; i++) {
        cout << "Работник " << i+1 << ":\n";
        cout << "  Отработано часов: "; cin >> hours[i];
        cout << "  Ставка (руб/час): "; cin >> rate[i];
        cout << "  Премия (%): "; cin >> bonus[i];
    }
    
    // Вычисления
    double total_tax = 0;
    for (int i = 0; i < n; i++) {
        salary[i] = hours[i] * rate[i] * (1 + bonus[i]/100);
        tax[i] = salary[i] * 0.13;
        net_salary[i] = salary[i] - tax[i];
        total_tax += tax[i];
    }
    
    // Поиск результатов
    double min_salary = salary[0], max_salary = salary[0];
    int min_index = 0, max_index = 0, count_high = 0;
    
    for (int i = 0; i < n; i++) {
        if (salary[i] < min_salary) { min_salary = salary[i]; min_index = i; }
        if (salary[i] > max_salary) { max_salary = salary[i]; max_index = i; }
        if (net_salary[i] > 50000) count_high++;
    }
    
    // Вывод результатов
    cout << "\nРезультаты:\n";
    cout << "1. Меньше всех: работник №" << min_index+1 << endl;
    cout << "2. Максимальная зарплата: " << max_salary << " (работник №" << max_index+1 << ")\n";
    cout << "3. С зарплатой >50000: " << count_high << " человек\n";
    cout << "4. Общий налог: " << total_tax << " руб.\n";
    
    delete[] hours; delete[] rate; delete[] bonus;
    delete[] salary; delete[] tax; delete[] net_salary;
    
    return 0;
}