
//Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of an array of n
//integers.
// Created by User on 2/8/2024.
//
#include <iostream>
using namespace std ;

int calc_sum(int a[],int st, int end){
    if(st==end) return a[st];
    int mid = (st+end)/2 ;
    int s1 = calc_sum(a,st,mid);
    int s2 = calc_sum(a,mid+1,end);
    return s1+s2 ;
}

int main(){
    int a[]= {5,-4,1,-17,18,40,23,-25};
    int len = sizeof(a)/sizeof(a[0]);
    int res = calc_sum(a,0,len-1);
    cout << "sum: " << res ;
}