//19.Find the sum of the following series up to nth position / Print the following series up to
//nth position.
//1 + 2 + 3 + ⋯
#include<iostream>
using namespace std;
int series(int n){ //SUM & PRINT SERIES FROM END TO START TERM //
    if(n==1 ){
        cout<< n << " = " ;
        return 1;
    }
    cout<< n << "+ " ;
    return n+ series(n-1) ;
}
int main(){
    int sum =  series(8);
    cout << sum ;
    return 0;
}
