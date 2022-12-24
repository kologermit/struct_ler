class Complex {
	public:
		float r, c;
		Complex(float r=0, float c=0) {
			this->r = r;
			this->c = c;
		}

		Complex(const Complex & a) {
			this->r = a.r;
			this->c = a.c;
		}

	private:

		Complex plus(const float & a=0) {
			return Complex(this->r + a, this->c);
		}

		Complex plus(const Complex & a) {
			return Complex(this->r + a.r, this->c + a.c);
		}

		Complex minus(const float & a=0) {
			return Complex(this->r - a, this->c);
		}

		Complex minus(const Complex & a) {
			return Complex(this->r - a.r, this->c - a.c);
		}

	public:

		Complex operator+(const float & a) {
			return this->plus(a);
		}

		Complex operator+(const Complex & a) {
			return this->plus(a);
		}

		Complex operator-(const float & a) {
			return this->minus(a);
		}

		Complex operator-(const Complex & a) {
			return this->minus(a);
		}

		// friend std::ostream& operator<< (std::ostream &out, const Complex & a) {
		// 	out << a.r << " " << a.c << "\n";
		// 	out << "123123\n";
		// 	if (a.r) {
		// 		out << a.r;
		// 	}
		// 	if (a.r and a.c) {
		// 		if (a.c < 0) {
		// 			out << " - " << -a.c << "i";
		// 		}
		// 		else {
		// 			out << " + " << a.c << "i";
		// 		}
		// 	}
		// 	else if (a.c) {
		// 		out << a.c << "i";
		// 	}
		// 	else if (!a.r) {
		// 		out << 0;
		// 	}
		//     return out; 
		// }
};