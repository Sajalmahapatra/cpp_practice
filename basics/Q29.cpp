#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string text = "Find the area of Scalene Triangle :";
    int dividend, divisor;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the dividend : ";
    cin >> dividend;
    cout << "Input the divisor : ";
    cin >> divisor;
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    cout << "\nThe quotient of the division is : " << quotient << endl;
    cout << "The remainder of the division is : " << remainder << endl;

    return 0;
}