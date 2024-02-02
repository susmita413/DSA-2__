//1^2 + 2^2 + 3^2 + ⋯
//
#include<iostream>
using namespace std;
int series(int st, int n){  // SUM & PRINT FROM START TO END TERM//
    if(st == n ){
        cout<< st << "^2"<< " = " ;
        return (st*st);
    }
    cout<< st << "^2"<<" + " ;
    return (st*st)+ series(st+1,n) ;
}

int main(){
    int sum =  series(1,5);
    cout << sum ;
    return 0;
}

//
//