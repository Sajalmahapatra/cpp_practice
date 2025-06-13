#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m, sum = 0;
    string welcomeText = "Sum of two numbers :";
    cout << "\n"
         << welcomeText << endl;
    cout << setfill('-');
    cout << setw(welcomeText.size()) << "" << endl;
    cout << "Input 1st number : ";
    cin >> n;
    cout << "\nInput 2nd number : ";
    cin >> m;
    sum = n + m;
    cout << "\nThe sum of the numbers is : " << sum << endl;
    return 0;
}