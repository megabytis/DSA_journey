// printing fibonacci numbers till N

#include<iostream>
using namespace std;

int res(int x) 
{
    int ppn=0,pn=1;
    int op=0;
    for(;;)
    {
        if(op<=x)
        {
            cout << op << " ";
            ppn=pn;
            pn=op;
            op=(pn+ppn);
        }
        else
        {
            break;
        }
    }
    return 0;
}

int main() {
    int n;
    cout << "Till which number do you want fibonacci sequence : " ;
    cin >> n;
    res(n);
    return 0;
}