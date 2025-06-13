#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, quotient;
    string text = "Divide two numbers and print:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    a = 30;
    b = 10;
    quotient = a / b;
    cout << "The quotient of 30 and 10 is : " << quotient << endl;
    return 0;
}