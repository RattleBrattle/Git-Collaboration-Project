#include "header.h"
#include <iostream>

using namespace std;
int main() {
    int num1 = 0, num2 = 0, result = 0;
    char op;
    cout << "Enter your expression (EX: 3 + 4): ";
    cin >> num1 >> op >> num2;
    switch (op) {
        case '+':
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = sub(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = div(num1, num2);
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default:
            cout << "Unsupported operation." << endl;
            break;
    }
    return 0;
}

int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}

int multiply(int a, int b) {
    return a * b;
}
int div(int x, int y) {
    if (y == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return x / y;
}
