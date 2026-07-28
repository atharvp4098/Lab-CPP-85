#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    cout << "Area of the circle = " << area << endl;
    cout << "Circumference of the circle = " << circumference << endl;

    return 0;
}