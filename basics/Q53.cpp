#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Calculate the area of the Equilateral Triangle :";
    float side;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the value of the side of the equilateral triangle : ";
    cin >> side;
    double area = (sqrt(3) * pow(side, 2)) / 4;
    cout << "\nThe area of equilateral triangle is : " << area << endl;
    return 0;
}