#include <bits/stdc++.h>
#define elif else if
#define ld long double
using namespace std;
int main() {
	ld x;
	cout << "Input data:\n";
	cin >> x;
	cout << "Output data:\n";
	ld y;
	// if (x > 4 or x < -4) {
	// 	cout << "Error";
	// }
	if (x <= 2) {
		y = 1 / 2.5 * (x + 2) + 1;
	}
	elif (x <= 1) {
		y = 1.5 * (x + 1) + 2.5;
	}
	elif (x <= 2) {
		y = 1 / 3.0 * (x - 2) + 3.5;
	}
	else {
		y = -3.5 / 2 * (x - 4);
	}
	cout << y;
}