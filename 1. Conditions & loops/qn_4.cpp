#include <iostream>
using namespace std;

int main() 
{
    for (int i = 0; i < 15; i++)
    {
        for(int j=i; j<=5; j++)
        {
            cout << i << " " << j   << endl;
        }
    }
    return 0;
}

/*

output :
0 0
0 1
0 2
0 3
0 4
0 5
1 0
1 1
1 2
1 3
1 4
1 5
2 0
2 1
2 2
2 3
2 4
2 5
3 0
3 1
3 2
3 3
3 4
3 5
4 0
4 1
4 2
4 3
4 4
4 5
5 0
5 1
5 2
5 3
5 4
5 5

*/