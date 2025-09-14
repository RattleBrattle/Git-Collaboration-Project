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
        default:
            cout << "Unsupported operation." << endl;
            break;
    }
    return 0;
}

int add(int x, int y) {
    return x + y;
}

