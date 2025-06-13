#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float pi = 3.1416f;
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << setfill('-'); // It will fill the space in cout
    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << scientific; // set value in scientific format with exponent
    cout << "The value of pi in scientific format is : " << pi << endl;

    bool done = false;
    cout << "Status in number : " << done << endl;
    cout << boolalpha; // set the output in alphabet true or false.
    cout << "Status in alphabet : " << done << endl;

    return 0;
}