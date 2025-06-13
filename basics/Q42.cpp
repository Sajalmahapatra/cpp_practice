#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string text = "Print the name in reverse where last name comes first:", lName, fName;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input First Name: ";
    cin >> fName;
    cout << "Input Last Name: ";
    cin >> lName;
    cout << "\nName in reverse is: " << lName << " " << fName << endl;
    return 0;
}