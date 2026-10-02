#include <iostream>

using namespace std;

// Function prototypes for clarity
void showMenu();
void handleArithmetic(int choice);

int main() {
    int choice;

    do {
        showMenu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            handleArithmetic(choice);
        } else if (choice == 5) {
            cout << "\nExiting the program. Goodbye!\n";
        } else {
            cout << "\n[Error] Invalid choice! Please select an option from 1 to 5.\n";
        }

        cout << "\n-----------------------------------\n";

    } while (choice != 5); // Loop continues until user exits

    return 0;
}

// Function to print the menu UI
void showMenu() {
    cout << "========== MATH MENU ==========\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
    cout << "===============================\n";
}

// Function to get user numbers and perform the chosen operation
void handleArithmetic(int choice) {
    double num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "\nResult: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
            break;
        case 2:
            cout << "\nResult: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
            break;
        case 3:
            cout << "\nResult: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
            break;
        case 4:
            // Check for division by zero to prevent run-time errors
            if (num2 == 0) {
                cout << "\n[Error] Division by zero is not allowed!\n";
            } else {
                cout << "\nResult: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
            }
            break;
        default:
            break;
    }
}