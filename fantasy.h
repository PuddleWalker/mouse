#pragma once

#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

template <typename T>
class calendar
{

protected:
	T month = 0;
	int year = 0;
	int* dates = new int[30];
public:
	calendar(int year, T month) : month{ month }, year{ year } {}
	calendar(initializer_list<int> dates)
	{
		int i = 0;
		for (const auto& e : dates)
		{
			cout << e << " ";
			this->dates[i] = e;
			i++;
		}
	}

	void print() const
	{
		cout << "Важные даты: " << endl;
		cout << "Год: " << year << endl;
		cout << "Месяц: " << month << endl;
	}

	void printb() {
		for (const auto& value : dates) {
			cout << value << ' ';
		}
		std::cout << std::endl;
	}

};