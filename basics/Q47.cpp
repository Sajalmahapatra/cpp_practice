#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    string text = "Sample Output: ";
    cout << text << endl;
    cout << setfill('-') << setw(text.size() * 2) << "" << endl;

    //
    auto startVector = high_resolution_clock::now();
    cout << "\n\n\nFirst process using vector";
    vector<int> arr;
    arr = {1, 2, 3, 4, 5, 6, 7, 8};
    size_t length = arr.size();
    int *array = new int[2];
    for (int i = 0; i < length; i++)
    {
        arr[i] % 2 == 0 ? array[0] += arr[i] : array[1] += arr[i];
    }
    cout << "\nSum of all even and odd numbers: " << array[0] << "," << array[1] << endl;
    auto stopVector = high_resolution_clock::now();
    auto durationVector = duration_cast<microseconds>(stopVector - startVector);
    cout << "Time taken by the first process using vector: " << durationVector.count() << " microseconds" << endl;

    // for second process.
    auto startArray = high_resolution_clock::now();
    cout << "\n\n\nAnother sort process.";
    int newArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *res = new int[2];
    for (auto num : newArr)
    {
        num % 2 == 0 ? res[0] += num : res[1] += num;
    }
    cout << "\nSum of all even and odd numbers: " << res[0] << "," << res[1] << endl;
    auto stopArray = high_resolution_clock::now();
    auto durationArray = duration_cast<microseconds>(stopArray - startArray);

    cout << "Time taken by the second process: " << durationArray.count() << " microseconds" << endl;
    return 0;
}