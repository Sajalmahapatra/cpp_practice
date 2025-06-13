#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    string text = "Calculate the Compound Interest :";
    float p, r, t;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input the Principle: ";
    cin >> p;
    cout << "Input the Rate of Interest: ";
    cin >> r;
    cout << "Input the Time: ";
    cin >> t;
    double ca = p * pow((1 + (r / 100)), t); // compound amount;
    double ci = ca - p;                      // compound intrest.
    cout << "The Interest after compounded for the amount " << p << " for " << t << " years @" << r << "% is: " << ci << endl;
    cout << "The total amount after compounded for the amount " << p << " for " << t << " years @" << 10 << " % is: " << ca << endl;
    return 0;
}