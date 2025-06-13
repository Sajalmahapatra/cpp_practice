#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    int n;
    string text = "Display the Current Date and Time :";
    cout << text << endl;
    cout << setfill('-') << setw(text.size()) << "" << endl;

    time_t currentTime = time(nullptr);
    tm *localTime = localtime(&currentTime);
    cout << " seconds = " << localTime->tm_sec << endl;
    cout << " minutes = " << localTime->tm_min << endl;
    cout << " hours = " << localTime->tm_hour << endl;
    cout << " day of month = " << localTime->tm_mday << endl;
    cout << " month of year = " << localTime->tm_mon + 1 << endl;
    cout << " year = " << localTime->tm_year + 1900 << endl;
    cout << " weekday = " << localTime->tm_wday << endl;
    cout << " day of year = " << localTime->tm_yday << endl;
    cout << " daylight savings = " << (localTime->tm_isdst) << endl;
    cout << endl;
    cout << endl;
    cout << " Current Date: " << localTime->tm_mday << "/" << localTime->tm_mon + 1 << "/" << localTime->tm_year << endl;
    cout << " Current Time: " << localTime->tm_hour << ":" << localTime->tm_min << ":" << localTime->tm_sec << endl;

    char timeString[100];
    strftime(timeString, sizeof(timeString), "%Y-%m-%d %I:%M:%S %p", localTime);    // Print the formatted time in 12hr format
    cout << "\nCurrent time: " << timeString << endl;

    strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", localTime);    // Print the formatted time in 24hr format
    cout << "\nCurrent time: " << timeString << endl;   
    return 0;
}