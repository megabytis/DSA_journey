/* Print EXtreme positions of an array 
i.e. let's assueme an array of size 5 ;
1st print element of 1st position i.e. of 0th index then of 5th position
then of 2nd , then of 4th , then of 3rd 
then it should stop :)
*/

#include<iostream>
#include<climits>
using namespace std ;

void extremePrint(int arr[], int n) 
{
    int i = 0;
    int j = n-1;

    while(i <= j) 
    {
        if(i == j) 
        {
            cout << arr[i] << " ";
            break;
        }
        else 
        {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }

    }
}

int main()
{
    int arr[5], len, i;
    len = 5 ;

    for(i=0; i<5; i++) 
    {
        cout << "Enter the value for box index: " << i << endl;
        cin >> arr[i];
    }

    extremePrint(arr, len) ;
    cout << endl ;

    return 0 ;

}
