#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "For First Complex Number:" << endl;
    c1.input();

    cout << "\nFor Second Complex Number:" << endl;
    c2.input();
    c3 = c1.add(c2);
    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Resultant Sum: ";
    c3.display();

    return 0;
}

