#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main() {
	double x;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    cout << "Введите x = ";
    cin >> x;

    double y;

    if (x <= -2.5) {
        y = -x - 1.5;
    }
    else if (x > -2.5 && x <= 0.0) {
        y = (3.0 / 5.0) * x + 2.5;
    }
    else if (x > 0 && x <= 3.0) {
        y = 2.5;
    }
    else  if (x > 3.0) {
        y = -(5 / 3.0) * x + 7.5;
    };

    cout << "y = " << y;
}