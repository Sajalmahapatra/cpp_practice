#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string text = "Make a rectangular shape by a single digit number :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the number : ";
    cin >> n;
    cout << "\n"
         << n << n << n << n << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << n << setfill(' ') << setw(to_string(n).size() * 2 + to_string(n).size()) << n << endl;
    }
    cout << n << n << n << n << endl
         << endl;
    ;
    return 0;
}