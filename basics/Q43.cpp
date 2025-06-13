#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Find the area and circumference of any circle :";
    int radius;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the radius(1/2 of diameter) of a circle : " ;
    cin >> radius;
    double area = M_PI * pow((double)radius, 2);
    double perimeter = 2 * M_PI * (double)radius;
    cout << fixed << setprecision(4) << endl;
    cout << "\nThe area of the circle is : " << area << endl;
    cout << "The circumference of the circle is : " << perimeter << endl;
    return 0;
}