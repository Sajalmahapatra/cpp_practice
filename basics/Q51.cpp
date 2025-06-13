#include <iostream>
#include <iomanip>
using namespace std;
#define MILE 1.609341908

int main()
{
    string text = "Convert kilometers per hour to miles per hour :";
    int kmPerHour;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the distance in kilometer : ";
    cin >> kmPerHour;
    cout << "The " << kmPerHour << " Km./hr. means " << (double)kmPerHour / MILE << " Miles/hr." << endl;
    return 0;
}