// 2 ∗ 3 ∗ 4 + 4 ∗ 5 ∗ 3 + 8 ∗ 7 ∗ 2 + 16 ∗ 9 ∗ 1 + ⋯
// Created by User on 2/2/2024.
//
#include<iostream>
using namespace std ;
int series(int t1, int t2,int t3,int n, int i=1){
    if(i==n) return t1*t2*t3 ;

    return (t1*t2*t3) + series(t1*2,t2+2,t3-1,n,i+1);
}


int main(){
    int numOfTerm= 3;
    int res = series(2,3,4,numOfTerm);
    cout<< res ;
    return 0 ;
}

