#include <iostream>
#include <iomanip>
using namespace std;
#define TOTAL_ANGLE 180

int main()
{
    string text = "Find the third angle of a triangle :";
    float angle1, angle2, angle3;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;

    cout << "Input the 1st angle of the triangle : ";
    cin >> angle1;
    cout << "Input the 2nd angle of the triangle : ";
    cin >> angle2;
    angle3 = TOTAL_ANGLE - (angle1 + angle2);
    cout << "The 3rd of the triangle is : " << angle3 << endl;
    return 0;
}