#include <iostream>
using namespace std;

int main()
{
	double hours, payment, prem, sum;
    cout << "Введите количество отработанных часов: " << endl;
    cin >> hours;
    cout << "Введите ставку почасовой оплаты: " << endl;
    cin >> payment;
    cout << "Введите % премии: " << endl;
    cin >> prem;
    sum = (hours*payment) + (prem / 100)*hours*payment;
    cout << "Итоговая зароботная плата: " << sum;
	return 0;
}
