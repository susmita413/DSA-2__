//2 ∗ 3 + 4 ∗ 5 + 8 ∗ 7 + 16 ∗ 9 + ⋯

#include<iostream>
using namespace std ;
int series(int t1, int t2,int n, int i=1){
    if(i==n) return t1*t2 ;

    return (t1*t2) + series(t1*2,t2+2,n,i+1);
}


int main(){
    int numOfTerm= 4;
    int res = series(2,3,numOfTerm);
    cout<< res ;
    return 0 ;
}