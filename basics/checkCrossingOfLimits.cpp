#include <iostream>
using namespace std;

int main()
{
    char gender = 'F';
    bool isEmployed = true;
    int numOfsons = 2;
    short yearOfAppt = 2009;              // [-32767, 32768]
    unsigned int yearlyPackage = 1500000; // [0, 4294967295]
    double height = 79.48;
    float gpa = 4.69f;
    long totalDrawan = 12047235L;    // Suffix 'L' for long
    long long balance = 995324987LL; // Need suffix 'LL' for long long int
    cout << " The Gender is :           " << gender << endl;
    cout << " Is she married? :         " << isEmployed << endl;
    cout << " Number of sons she has :  " << numOfsons << endl;
    cout << " Year of her appointment : " << yearOfAppt << endl;
    cout << " Salary for a year :       " << yearlyPackage << endl;
    cout << " Height is :               " << height << endl;
    cout << " GPA is                    " << gpa << endl;
    cout << " Salary drawn upto :       " << totalDrawan << endl;
    cout << " Balance till :            " << balance << endl;
    return 0;
}