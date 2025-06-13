#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string text = "Print code (ASCII code / Unicode code etc.) of a given character:";
    char a;
    cout << text << endl;
    cout << setfill('-') << setw(text.size() * 2) << "" << endl;
    cout << "Input a character : ";
    cin >> a;
    cout << "The ASCII value of a is : " << int(a) << endl;
    cout << "The character for the ASCII value " << int(a) << " is " << char(int(a)) << endl;
    return 0;
}