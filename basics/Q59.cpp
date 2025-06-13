#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Print the distance between two points on the surface of earth:";
    double d, la1, la2, lo1, lo2, er, r;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;

    cout << " Input the latitude of coordinate 1: ";
    cin >> la1;

    cout << " Input the longitude of coordinate 1: ";
    cin >> lo1;

    cout << " Input the latitude of coordinate 2: ";
    cin >> la2;

    cout << " Input the longitude of coordinate 2: ";
    cin >> lo2;

    r = 0.01745327;
    // Converting latitude and longitude values from degrees to radians
    la1 = la1 * r;
    la2 = la2 * r;
    lo1 = lo1 * r;
    lo2 = lo2 * r;

    er = 6371.01; // Earth's radius in kilometers
    // Calculating the distance between two points on the Earth's surface using Haversine formula
    d = er * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));
    cout << "\n The distance between those points is: " << d << endl;
    return 0;
}