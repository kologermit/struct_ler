#include <bits/stdc++.h>
using namespace std;
int main() {
	double x, y;
	cout << "Input data:\n";
	cin >> x;
	cout << "Output data:\n";
	y = (x <= -1 ? x*x*x - x*x - 1 : x <= 0 ? x : cos(-x));
	cout << y;
}