#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double vol, radius, height;
    string text = "Calculate the volume of a cylinder :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the radius of the cylinder : ";
    cin >> radius;
    cout << "Input the height of the cylinder : ";
    cin >> height;
    vol = 3.14 * pow(radius, 2) * height;
    cout << "The volume of a cylinder is : " << vol << endl;

    return 0;
}