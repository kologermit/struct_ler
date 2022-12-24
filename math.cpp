#include <cmath>
#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	double r = 0;
	for (long long i = 1; i <= n; i++) {
		r += 1 / pow(4, i) + 1 / pow(2, i);
		cout << r << endl;
	}
	// cout << r;
}