#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c, f;
    string text = "Convert temperature in Celsius to Fahrenheit :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the temperature in Celsius : ";
    cin >> c;
    f = ((9 * c) / 5) + 32;
    cout << "\nThe temperature in Celsius : " << c << endl;
    cout << "The temperature in Fahrenheit : " << f << endl;
    return 0;
}