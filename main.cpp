// #include <bits/stdc++.h>
// #include <iostream>
// #include "Complex.h"
#include "Giga_number.h"
#include <iostream>
using namespace std;
int main() {
	Giga_number n(999);
	n = n + 111 + 10 + 1;
	cout << n.size << endl;
	for (int i = 0; i < n.size; i++) {
		cout << n.num[i] << endl;
	}
}
