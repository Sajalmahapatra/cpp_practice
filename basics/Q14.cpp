#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string welcomeText = "Calculate the volume of a sphere :";
    double radius = 0;
    cout << "\n"
         << welcomeText << endl;
    cout << setfill('-');
    cout << setw(welcomeText.size()) << "" << endl;
    cout << "Input the radius of a sphere : ";
    cin >> radius;
    double volume = 4 * 3.14 * pow(radius, 3) / 3;
    cout << "\nThe volume of a sphere is : " << volume << endl;
    return 0;
}