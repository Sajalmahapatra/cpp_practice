#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string text = "Calculate the volume of a cylinder :";
    int radius, height;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the radius of the cylinder : ";
    cin >> radius;
    cout << "Input the height of the cylinder : ";
    cin >> height;
    double volume = M_PI * pow((double)radius, 2) * height;
    cout << "\nThe volume of a cylinder is : " << volume << endl;
    return 0;
}