#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Calculate the volume of a cube :";
    double volume, side;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the side of a cube : ";
    cin >> side;
    volume = pow(side, 3);
    cout << "The volume of a cube is : " << volume << endl;
    return 0;
}