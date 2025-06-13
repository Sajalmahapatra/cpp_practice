#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string text = "Convert temperature in Celsius to Kelvin :";
    double k, c;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the temperature in Celsius : ";
    cin >> c;
    k = c + 273.15;
    cout << "\nThe temperature in Celsius : " << c << endl;
    cout << "The temperature in Kelvin : " << k << endl;
    return 0;
}