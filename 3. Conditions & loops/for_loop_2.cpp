// printing N numbers of fibonacci numbers

#include<iostream>
using namespace std;

int res(int x) 
{
    int ppn=0,pn=1,op=0;
    for(int i=0; i<=x; i++)
    {
        cout << op << " ";
        ppn=pn;
        pn=op;
        op=(pn+ppn);
        
    }
    return 0;
}

int main() {
    int n;
    cout << "How many fibonacci numnbers do u want : " ;
    cin >> n;
    res(n);
    return 0;
}