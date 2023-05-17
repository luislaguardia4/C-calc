#include <iostream>
using namespace std;

int main() {

    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;
    bool validOperation = true;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "Error: Division by zero is not allowed!" << endl;
            validOperation = false;
        }
        break;
    default:
        cout << "Error: Invalid operator!" << endl;
        validOperation = false;
    }

    if (validOperation) {
        cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    }
    cout << "        " << endl;
    cout << "        " << endl;

    cout << "  **                  **      " << endl;
    cout << "  **                        *******  " << endl;
    cout << "  **       **    **   **   **        " << endl;
    cout << "  **       **    **   **   **           " << endl;
    cout << "  **       **    **   **    *******     " << endl;
    cout << "  **       **    **   **          **  " << endl;
    cout << "  **       **    **   **          ** " << endl;
    cout << "  ******     ****     **    *******   " << endl;

    return 0;
}
