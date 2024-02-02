#include<bits/stdc++.h>
using namespace std ;

int fib[100]={0};
int fibonacci(int n ){
    if(n<=1){
        fib[n]=n ;
        return n ;
    }
    else{
        if(fib[n-2] == 0){
            fib[n-2] = fibonacci(n-2);
        }
        if(fib[n-1] == 0) {
            fib[n - 1] = fibonacci(n - 1);
        }
        return fib[n-2]+ fib[n-1];
    }
}


int main(){
    int x = 14 ;
    int value = fibonacci(x);
    cout << x<< "th value of fibonacci : " << value<< endl;

    cout<< "fibonacci series: " ;
    for(int i=0 ; i<=x; i++){
        cout<< fib[i] << " ";
    }
    return 0 ;
}
