#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string text = "Print the multiplication table of a number upto 10:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input a number: ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}