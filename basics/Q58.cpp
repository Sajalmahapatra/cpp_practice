#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Print the area of a polygon:";
    float area, side, side_length;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << " Input the number of sides of the polygon: "; // Prompting user to input the number of sides
    cin >> side;
    cout << " Input the length of each side of the polygon: "; // Prompting user to input the side length
    cin >> side_length ;
    area = (side * (side_length * side_length)) / (4.0 * tan((M_PI / side)));

    return 0;
}
