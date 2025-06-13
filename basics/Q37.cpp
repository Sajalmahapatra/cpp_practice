#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    string text = "Print a mystery series:";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;
    cout << " The series are: \n";
    int nm1 = 1;
    while (true)
    {
        ++nm1;
        if ((nm1 % 3) == 0)
        {
            continue;
        }
        if (nm1 == 50)
        {
            break;
        }
        if (nm1 % 2 == 0)
        {
            nm1 += 3;
        }
        else
        {
            nm1 -= 3;
        }
        cout << nm1 << " ";
        /* code */
    }

    return 0;
}