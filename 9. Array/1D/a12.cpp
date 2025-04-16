// Shifting of numbers inside array 

#include <iostream>
using namespace std;

void shiftArray(int arr[], int len, int numOfShifting)
{
    // Temporary array to store the last 'numOfShifting' elements
    int tempArray[numOfShifting];

    // 1st storing the last 'numOfShifting' elements
    for (int i = 0; i < numOfShifting; i++)
    {
        tempArray[i] = arr[len - numOfShifting + i];
    }

    // now shifting the remaining elements to the right
    for (int i = len - 1; i >= numOfShifting; i--)
    {
        arr[i] = arr[i - numOfShifting];
    }

    // now copying the stored elements back to the beginning
    for (int i = 0; i < numOfShifting; i++)
    {
        arr[i] = tempArray[i];
    }

    // now Printing  the shifted array
    cout << "Shifted Array: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr) / sizeof(arr[0]); // Calculate array length
    int numOfShifting;

    cout << "How many places do you want to shift each element: ";
    cin >> numOfShifting;

    shiftArray(arr, len, numOfShifting);

    return 0;
}
