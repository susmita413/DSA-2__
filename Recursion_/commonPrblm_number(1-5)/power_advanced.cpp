#include <iostream>
using namespace std;

int pow(int base,int n){
    if (n == 0) return 1;
    else {
        int half = pow(base, n / 2);
        return  n % 2 == 0 ? half * half : base * half * half;
    }
}

int main(){
    cout<< pow(8,4);
}
