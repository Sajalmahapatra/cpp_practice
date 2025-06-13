#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Calculate the volume of a cone :";
    int radius, height;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input Cone's radius: ";
    cin >> radius;
    cout << "Input Cone's height: ";
    cin >> height;
    double volume = (1 * M_PI * pow((double)radius, 2) * height) / 3;

    cout << "\nThe volume of the cone is: " << volume << endl;
    return 0;
}