#include <iostream>

using namespace std;

int main() {
    // Declare variables using double to support decimal inputs
    double length, width, area, perimeter;

    // Prompt user for input
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Mathematical formulas
    area = length * width;
    perimeter = 2 * (length + width);

    // Display results
    cout << "\n--- Results ---" << endl;
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
