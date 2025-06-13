#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string text = "Compute the total and average of four numbers :";
    double a, b, c, d, avg, sum;
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << "Input 1st two numbers (separated by space) : ";
    cin >> a >> b;
    cout << "Input last two numbers (separated by space) : ";
    cin >> c >> d;
    sum = a + b + c + d;
    avg = sum / 4;
    cout << "\nThe total of four numbers is : " << sum << endl;
    cout << "The average of four numbers is : " << avg << endl;
    return 0;
}