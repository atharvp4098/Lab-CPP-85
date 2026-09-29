#include <iostream>
using namespace std;
class Distance {
public:
int feet, inch;
Distance(int f, int i)
{
this->feet = f;
this->inch = i;
}
void operator-()
{
feet--;
inch--;
cout << "\nFeet & Inches(Decrement): " <<
feet << "'" << inch;
}
void operator+()
{
feet++;
inch++;
}
};
int main()
{
Distance d1(8, 9);
Distance d2(10,11);
-d1;
return 0;
}
