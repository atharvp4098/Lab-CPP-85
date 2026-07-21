#include <iostream>
using namespace std;

int main() {
    int choice;
    int num1, num2;

    do {
        // Displaying the menu options
        cout << "\n===============================" << endl;
        cout << "        MENU CALCULATOR        " << endl;
        cout << "===============================" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // Exit immediately if the user wants to leave
        if (choice == 6) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        // Validate choice before asking for numbers
        if (choice >= 1 && choice <= 5) {
            cout << "Enter two integers: ";
            cin >> num1 >> num2;
        }

        // Processing selection using switch-case
        switch (choice) {
            case 1:
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case 4:
                // Check to handle division by zero error
                if (num2 != 0) {
                    // Typecasted to double for precise decimal results
                    cout << "Result: " << num1 << " / " << num2 << " = " << (double)num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is undefined!" << endl;
                }
                break;
            case 5:
                // Check to handle modulus by zero error
                if (num2 != 0) {
                    cout << "Result: " << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
                } else {
                    cout << "Error: Modulus by zero is undefined!" << endl;
                }
                break;
            default:
                cout << "Invalid choice! Please select a valid option from the menu." << endl;
                break;
        }

    } while (choice != 6); // Keep looping until choice is 6

    return 0;
}

