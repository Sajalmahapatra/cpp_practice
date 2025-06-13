#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string text = "Convert temperature in Fahrenheit to Kelvin :";
    double k, f;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the temperature in Fahrenheit : ";
    cin >> f;
    cout << "\nThe temperature in Fahrenheit : " << f << endl;
    k = (f - 32) * 5/9 + 273.15;
    cout << "The temperature in Kelvin : " << k << endl;
    return 0;
}