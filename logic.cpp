#include <iostream>
using namspace std;
class Calculator {
public:
    // Addition
    double add(double a, double b) {
        return a + b;
    }

    // Subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // Division
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" <<endl;
            return 0;
        }
        return a / b;
    }

    // Modulo (requires integers)
    int mod(int a, int b) {
        if (b == 0) {
            cout << "Error: Modulo by zero!" <<endl;
            return 0;
        }
        return a % b;
    }
};

int main() {
    Calculator calc;
    
    double num1 = 15.0;
    double num2 = 4.0;
    
    cout << "Addition: " << calc.add(num1, num2) <<endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) <<endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) <<endl;
    cout << "Division: " << calc.divide(num1, num2) <<endl;
    cout << "Modulo: " << calc.mod(static_cast<int>(num1), static_cast<int>(num2)) <<endl;

    return 0;
}
