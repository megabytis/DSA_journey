/* if input = 10, 20, 30, 40 
all possible pairs will be  :-
(10,10)  (20,10)  (30,10)  (40,10)
(10,20)  (20,20)  (30,20)  (40,20)
(10,30)  (20,30)  (30,30)  (40,30)
(10,40)  (20,40)  (30,40)  (40,40)

now printing the numbers +nt in right angled triangle manner 
i.e. 10,10  10,20  10,30  10,40  20,20  20,30  20,40  30,30  30,40 40,40

*/
#include<iostream>
using namespace std  ;

void noPairRAngleTriangle(int arr[], int len)
{
    for(int i = 0 ; i < len; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << "(" << arr[j] << "," << arr[i] << ")" << endl ; 
        }
    }
}

int main()
{
    int x ;
    cout << "How many numbers do u wanna enter : " ;
    cin >> x ;
    int arr[x] ;

    cout << "Now start entering numbers : " << endl ;
    for(int i=0; i<x; i++)
    {
        cin >> arr[i] ;
    }

    noPairRAngleTriangle(arr, x) ;

    return 0 ;

}