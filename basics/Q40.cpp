#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double h, w, area, perimeter;
    string text = "Print the multiplication table of a number upto 10:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the width of the rectangle: ";
    cin >> w;
    cout << "Input the height of the rectangle: ";
    cin >> h;
    area = h * w;
    perimeter = 2 * (h + w);
    cout << "\nThe area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    return 0;
}