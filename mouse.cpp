
#include "fantasy.h"

int main()
{
    setlocale(LC_ALL, "RU");
    int year;
    string month;
    int* dates = new int[10];

    cout << "Программа для записи важных дат!" << endl;

    cout << endl;

    cout << "Введите год: "; cin >> year;

    cout << "Введите месяц: ";
    getline(cin, month);

    cout << endl;

    cout << "Заполните важные даты";
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите важную дату (или 0 для завершения)\n"; cin >> dates[i];
        while (dates[i] > 31) {
            cout << "Неверная дата. Попробуйте снова"; cin >> dates[i];
            if (dates[i] == 0) break;
        }
    }

    calendar<string> a{ year, month };
    a.print();
    calendar<int> b{ *dates };





}