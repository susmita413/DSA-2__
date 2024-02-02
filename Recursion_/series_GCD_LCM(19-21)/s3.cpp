// 1 ∗ 3 + 2 ∗ 5 + 3 ∗ 7 + 4 ∗ 9 + ⋯ + n*(2n+1)

#include<iostream>
using namespace std;
int series( int n){ //SUM FROM END TO START TERM//
    if(n==1 ){
        return (n*(2*n+1)) ;
    }
    return (n*(2*n+1))+ series(n-1) ;
}

int main(){
    int sum =  series(5);
    cout << sum ;
    return 0;
}

