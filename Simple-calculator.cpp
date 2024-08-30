#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    char operation;
    char choice;

    do 
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "Enter an operation (+, -, *, /): ";
        cin >> operation;

        switch (operation)
        {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) 
                {
                    cout << "Result: " << num1 / num2 << endl;
                } else 
                {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation." << endl;
                break;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Existing.." << endl;

    return 0;
}
