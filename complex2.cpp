#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() {
        real = 0.0;
        imag = 0.0;
    }
    void addComplex(double r1, double i1, double r2, double i2) {
        real = r1 + r2;
        imag = i1 + i2;
    }
    void display() const {
        if (imag == 0) {
            cout << real << "\n";
        } else if (imag > 0) {
            cout << real << " + " << imag << "i\n";
        } else {
            cout << real << " - " << -imag << "i\n";
        }
    }
};

int main() {
    double r1, i1; 
    double r2, i2; 
    cout << "Enter real and imaginary parts of 1st complex number: ";
    cin >> r1 >> i1;
    
    cout << "Enter real and imaginary parts of 2nd complex number: ";
    cin >> r2 >> i2;
    Complex result;
    result.addComplex(r1, i1, r2, i2);

    cout << "Resulting Sum: ";
    result.display();

    return 0;
}

