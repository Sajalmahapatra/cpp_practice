#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f, k;
    string text = "Convert temperature in Kelvin to Fahrenheit :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the temperature in Kelvin : ";
    cin >> k;
    f = (9.0 / 5) * (k - 273.15) + 32;
    cout << "\nThe temperature in Kelvin : " << k << endl;
    cout << "The temperature in Fahrenheit : " << f << endl;
    return 0;
}