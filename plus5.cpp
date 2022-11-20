#include <bits/stdc++.h>
#define elif else if
using namespace std;
int main() {
	int day, month, year;
	cout << "Day: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	cout << "Input data: " << day << "." << month << "." << year << endl;
	cout << "Output data: ";
	day += 5;
	if ((month == 1 or
		month == 3 or
		month == 5 or
		month == 7 or
		month == 8 or
		month == 10 or
		month == 12) and day > 31) {
		month++;
		day = day % 31 + 1;
	}
	elif (month == 2 and day > 28) {
		month++;
		day = day % 28 + 1;
	}
	elif ((month == 4 or
		month == 6 or
		month == 9 or
		month == 11) and day > 30) {
		month++;
		day = day % 30 + 1;
	}
	if (month == 13) {
		month = 1;
		year++;
	}
	cout << day << "." << month << "." << year;
}