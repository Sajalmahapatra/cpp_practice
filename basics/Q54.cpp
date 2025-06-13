#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Calculate the Simple Interest :";
    float p, r, t;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the Principle: ";
    cin >> p;
    cout << "Input the Rate of Interest: ";
    cin >> r;
    cout << "Input the Time: ";
    cin >> t;
    double si = (p * r * t) / 100;
    cout << "The Simple interest for the amount " << p << " for 1 years @ " << t << "% is: " << si << endl;
    return 0;
}