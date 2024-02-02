#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n){
    if(n==0 ){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}

int main(){
    int n=20 ;
    int fib = 0;
    cout<< "fibonacci series: " ;
    for (int i = 0; i < n; i++) {
        fib = fibonacci(i);
        cout << fib << " ";     // fibonacci series print from 0 to n-1 index//
    }

    cout<< endl ;
    int x =19;
    int value= fibonacci(x);
    cout << x<< "th value of fibonacci : " << value<< endl;
}


