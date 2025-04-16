/* 2 SUM
if input = 10, 20, 30, 40 , target_number is 50
then we have to findout those two numbers whoc will make target_number

https://leetcode.com/problems/two-sum/description/
*/

#include <iostream>
#include<utility> // for pair<> :)
using namespace std;

/* PRINTING THE PAIR MANUALLY  */

// void twoSum(int arr[], int len, int targetNum)
// {
//     bool found = false;

//     for (int i = 0; i < len; i++)
//     {
//         for (int j = i + 1; j < len; j++)
//         {
//             if (arr[i] + arr[j] == targetNum)
//             {
//                 cout << "\nThe number pair which will make " << targetNum 
//                 << " is (" << arr[i] << ", " << arr[j] << ")\n";

//                 found = true;

//                 return; // Exit the function as we've found the pair
//             }
//         }
//     }

//     if (!found)
//     {
//         cout << "\nBro, there are no such numbers which can be added to make your target number.\n";
//     }
// }


/* PRINTING THE PAIR BY USING pair<> data_type */
/* Otherwise we can directly use pair<> datatype 
to rerturn a pair value answer */
pair<int, int> twoSum(int arr[], int len, int targetNum)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == targetNum)
            {
                return make_pair(arr[i], arr[j]); // Return the pair of numbers
            }
        }
    } 

    return make_pair(-1, -1); // Return (-1, -1) if no pair is found
}


int main()
{
    int x, targetNum;
    cout << "How many numbers do you want to enter: ";
    cin >> x;

    if (x < 2)
    {
        cout << "\nYou need at least two numbers to find a pair.\n";
        return 0;
    }

    int arr[x];

    cout << "Now start entering numbers:\n";
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter your target number : ";
    cin >> targetNum;

    // For normal return 
    //twoSum(arr, x, targetNum); 

    // Now for pair<> return 
    pair<int, int> result = twoSum(arr, x, targetNum);

    if (result.first != -1 && result.second != -1)
    {
        cout << "\nThe number pair which will make " << targetNum 
        << " is (" << result.first << ", " << result.second << ")\n";
    }
    else
    {
        cout << "\nBro, there are no such numbers which can be added to make your target number.\n";
    }

    return 0;
}

/* Here two loops being used one inside another 
so time complexity : O(n^2)

We are using 5-6 something normal variables 
so space complexity : O(1)
*/