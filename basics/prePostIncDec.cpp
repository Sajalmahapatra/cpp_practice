#include <iostream>
using namespace std;
int main()
{

    int i = 57;
    cout << "The number is : " << i << endl;
    i++;
    cout << "After post increment by 1 the number is : " << i << endl;
    ++i;
    cout << "After pre increment by 1 the number is : " << i << endl;
    i = i + 1;
    cout << "After increasing by 1 the number is : " << i << endl;
    i--;
    cout << "After post decrement by 1 the number is : " << i << endl;
    --i;
    cout << "After pre decrement by 1 the number is : " << i << endl;
    i = i - 1;
    cout << "After decreasing by 1 the number is : " << i << endl;
    return 0;
}