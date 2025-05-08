#include <iostream>
#include <vector>
using namespace std;

vector<int> find2sComplement(vector<int> binary) {
    int length = binary.size();
    vector<int> twosComp(length+1,0);

    //STEP : 1
    // fliping the bits
    // i.e. if binary have 1001 ,twosComp will be 0110, 
    // this is first step to make two's complement
    for(int i = length-1; i >= 0; i--){
        twosComp[i] = binary[i] == 0 ? 1 : 0 ;
    }

    // STEP : 2
    // Addition from end to front 
    int carrry = 1;
    for(int i=length-1; i >= 0; i--) {
        int sum = twosComp[i] + carrry;
        twosComp[i] = sum % 2;
        carrry = sum / 2 ;
    }

    if(carrry)
        twosComp[0] = carrry;

    return twosComp;
}
/*
Time complexity : O(n)
Space complexity : O(n)
*/

int main() {
    int n1 = 1111;
    int n2 = 1111;

    vector<int> binary = {1,0,0,1};
    vector<int> twosComp = find2sComplement(binary);

    for(int i=0; i<twosComp.size(); i++) {
        cout << twosComp[i];
    }
    cout << endl;

    return 0;
}