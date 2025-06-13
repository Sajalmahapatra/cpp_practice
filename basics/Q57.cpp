#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Print the area of a hexagon:";
    float area, side;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the side of the hexagon: ";
    cin >> side;
    area = (6 * (side * side)) / (4 * tan(M_PI / 6)); 
    cout << "\nThe area of the hexagon is: " << area << endl;
    return 0;
}
