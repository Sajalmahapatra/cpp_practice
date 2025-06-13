#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double length, width, area, perimeter;
    string text = "Calculate the volume of a cylinder :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the length of the rectangle : ";
    cin >> length;
    cout << "Input the width of the rectangle : ";
    cin >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "\nThe area of the rectangle is : " << area << endl;
    cout << "The perimeter of the rectangle is : " << perimeter << endl;
    return 0;
}