#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    string text = "Find the area of Scalene Triangle :";
    double side1, side2, angle;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the length of a side of the triangle : ";
    cin >> side1;
    cout << "Input the length of another side of the triangle : ";
    cin >> side2;
    cout << "Input the angle between these sides of the triangle : ";
    cin >> angle;
    double angleInRadians = (angle * M_PI) / 180.0;
    double area = side1 * side2 * sin(angleInRadians) * 0.5;
    cout << "\nThe area of the Scalene Triangle is : " << area << endl;
    return 0;
}