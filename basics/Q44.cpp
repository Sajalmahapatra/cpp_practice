#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Calculate the volume of a sphere :";
    int radius;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the radius of a sphere : ";
    cin >> radius;
    double volume = (4 * M_PI * pow((double)radius, 3)) / 3;
    cout << "The volume of a sphere is : " << volume << endl;
    return 0;
}