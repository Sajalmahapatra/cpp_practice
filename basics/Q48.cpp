#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string text = "Swap two numbers without using third variable:";
    int a, b;
    cout << text << endl;
    cout << setfill('-') << setw(text.size() * 2) << "" << endl;
    cout << "Input 1st number : ";
    cin >> a;
    cout << "Input 2nd number : ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping the 1st number is : " << a << endl;
    cout << "After swapping the 2nd number is : " << b << endl;
    return 0;
}