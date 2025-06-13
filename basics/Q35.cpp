#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string text = "Compute the specified expressions and print the output:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : " << (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) << endl;
    return 0;
}