#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Addition of two binary numbers:";
    long binary1, binary2;
    int sum[20], i = 0, remainder = 0;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;

    cout << " Input the 1st binary number: ";
    cin >> binary1;
    cout << " Input the 2nd binary number: ";
    cin >> binary2;

    while (binary1 != 0 || binary2 != 0)
    {
        int val = (int)((binary1 % 10 + binary2 % 10 + remainder) % 2);
        sum[i++] = val;
        remainder = (int)((binary1 % 10 + binary2 % 10 + remainder) / 2);
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
    {
        sum[i++] = remainder;
    }

    --i;
    while (i >= 0)
    {
        cout << sum[i];
        i--;
    }
    cout << endl;
    return 0;
}