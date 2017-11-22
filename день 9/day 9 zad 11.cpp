#include <iostream>

using namespace std;

int main(){

    int n, i;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter i: ";
    cin >> i;

    int k = 1 << i;

    //cout << k << endl;

    if((n & k) == k){
        n = n & (~k);
    }
    else{
        n = n | k;
    }

    cout << n;

    return 0;

}
