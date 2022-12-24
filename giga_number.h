#ifndef GIGA_NUMBER_KOLOGERMIT_LIBRARY
#define GIGA_NUMBER_KOLOGERMIT_LIBRARY
#include <iostream>
using namespace std;
const int MAX_GIGA_NUMBER_SIZE = 1000;
class Giga_number {
	public:
		short num[MAX_GIGA_NUMBER_SIZE];
		int size;
	Giga_number(const unsigned long long n) {
		unsigned long long c = n;
		this->size = 0;
		while (c) {
			this->num[this->size] = c % 10;
			this->size++;
			c /= 10;
		}
	};
	Giga_number operator+ (const unsigned long long n) {
		unsigned long long c = n;
		for (int i = 0; c; i++) {
			if (this->size <= i + 1) {
				this->size = i + 1;
			}
			this->num[i] += c % 10;
			c /= 10;
		}
		for (int i = 0; i < this->size; i++) {
			this->num[i + 1] += this->num[i] / 10;
			this->num[i] %= 10; 
			if (this->num[this->size]) {
				this->size++;
				this->num[this->size] = 0;
			}
		}
		return *(this);
	};
	Giga_number operator+ (const Giga_number n) {
		this->size = max(this->size, n.size) + 1;
		for (int i = 0; i < this->size; i++) {
			this->num[i] += n[i];
		}
		return *(this);
	}
};
#endif