#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double hours1, hours2, payment1, payment2, number1, number2, sum1, sum2, sum3;
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
    sum1 = hours1 * payment1;
    sum2 = hours2 * payment2;
    sum3 = sum1 + sum2;
    cout << "Результаты расчета: " << endl;
    if (sum1 > sum2){
        cout << "Сотрудник под номером " << number1 << " заработал больше." << endl;
    }
    else if (sum1 < sum2){
        cout << "Сотрудник под номером " << number2 << " заработал больше." << endl;
    }
    else {
        cout << "Сотрудники заработали одинаковую сумму." << endl;
    }
    cout << "Сумма, заработанная двумя сотрудниками: " << sum3;
	return 0;
}
