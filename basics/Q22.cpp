#include <iostream>
#include <iomanip>
#define TRIANGLE 180
using namespace std;

int main()
{
    double angle1, angle2, angle3;
    string text = "Find the third angle of a triangle :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the 1st angle of the triangle : ";
    cin >> angle1;
    cout << "Input the 2nd angle of the triangle : ";
    cin >> angle2;
    angle3 = TRIANGLE - (angle1 + angle2);
    cout << "\nThe 3rd of the triangle is : " << angle3 << endl;
    return 0;
}