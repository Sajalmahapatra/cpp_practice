#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int a, b;
    string welcomeText = "Swap two numbers :";
    cout << "\n"
         << welcomeText << endl;
    cout << setfill('-');
    cout << setw(welcomeText.size()) << "" << endl;
    cout << "Input 1st number : ";
    cin >> a;
    cout << "\nInput 2nd number : ";
    cin >> b;

    // swapping loagic.
    a = a + b; // 25 + 39 = 64
    b = a - b; // 64 - 39 = 25
    a = a - b; // 64 - 25 = 39
    cout << "\nAfter swapping the 1st number is : " << a << endl;
    cout << "After swapping the 2nd number is : " << b << endl;
    return 0;
}