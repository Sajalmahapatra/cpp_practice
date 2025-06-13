#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, area, s;
    string text = "Calculate the volume of a cylinder :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the length of 1st side of the triangle : ";
    cin >> a;
    cout << "Input the length of 2nd side of the triangle : ";
    cin >> b;
    cout << "Input the length of 3rd side of the triangle : ";
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "\nThe area of the triangle is : " << area << endl;
    return 0;
}