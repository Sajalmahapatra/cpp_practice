#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double kmh, mph;
    string text = "Convert kilometers per hour to miles per hour :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;

    cout << "Input the distance in kilometer : ";
    cin >> kmh;
    mph = kmh / 0.6213712;
    cout << "The " << 25 << "Km./hr. means " << mph << " Miles/hr." << endl;
    return 0;
}