#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realValue = 0.0, double imaginaryValue = 0.0) : real(realValue), imaginary(imaginaryValue) {}

    friend std::ostream& operator<<(std::ostream& os, const Complex& complex) {
        if (complex.imaginary == 0) {
            os << complex.real;
        } else if (complex.imaginary > 0) {
            os << complex.real << " + " << complex.imaginary << "i";
        } else {
            os << complex.real << " - " << -complex.imaginary << "i";
        }
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Complex& complex) {
        is >> complex.real >> complex.imaginary;
        return is;
    }

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-() const {
        return Complex(-real, -imaginary);
    }
};

int main() {
    Complex c1, c2, c3;
    std::cout << "Enter two complex values: ";
    std::cin >> c1 >> c2;
    c3 = c1 + c2;
    std::cout << "The sum is: " << c3 << std::endl;
    std::cout << "and negating the sum yields: " << -c3 << std::endl;

    return 0;
}