#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string text = "Divide two numbers and print:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;

    cout << "Input a number : ";
    cin >> n;
    string res = "Unknown!";
    if (n > 0)
    {
        res = "positive";
    }
    else if (n == 0)
    {
        res = "Zero";
    }
    else if (n < 0)
    {
        res = "Negative";
    }
    cout << "\nThe entered number is " << res << endl;
    return 0;
}
