#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14159
using namespace std;
int main()
{
    double radius, area, circumference;
    string text = "Find the area and circumference of any circle :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;
    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);
    cout << "\nThe area of the circle is : " << area << endl;
    cout << "The circumference of the circle is : " << circumference << endl;
    return 0;
}