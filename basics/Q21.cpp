#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c, f;
    string text = "Convert temperature in Fahrenheit to Celsius :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the temperature in Fahrenheit : ";
    cin >> f;
    c = (5 * (f - 32)) / 9;
    cout << "\nThe temperature in Fahrenheit : " << f << endl;
    cout << "The temperature in Celsius : " << c << endl;
    return 0;
}