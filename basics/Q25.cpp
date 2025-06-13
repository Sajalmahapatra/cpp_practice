#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c, k;
    string text = "Convert temperature in Kelvin to Celsius :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the temperature in Kelvin : ";
    cin >> k;
    c = k - 273.15;
    cout << "\nThe temperature in Kelvin : " << k << endl;
    cout << "The temperature in Celsius : " << c << endl;
    return 0;
}