#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string text = "Convert centimeter into meter and kilometer :";
    int centimeter;
    cout << text << endl;
    cout << setfill('-') << setw(text.size() * 2) << "" << endl;
    cout << "Input the distance in centimeter : ";
    cin >> centimeter;
    cout << "The distance in meter is: " << (double)centimeter / 100 << endl;
    cout << "The distance in kilometer is: " << (double)centimeter / 100000 << endl;;
    return 0;
}