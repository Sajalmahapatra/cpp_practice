#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string text = "Print the multiplication table of a number upto 10:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << " xxxxx\n"; // Outputting a specific pattern line by line
    cout << "x     x       x        x\n";
    cout << "x             x        x\n";
    cout << "x          xxxxxxx  xxxxxxx\n";
    cout << "x             x        x\n";
    cout << "x     x       x        x\n";
    cout << " xxxxx\n";
    return 0;
}