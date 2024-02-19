//Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of the even
//numbers of an array of n integers.

#include<iostream>
using namespace std;

int calcSum_even(int a[],int st, int end){
    if(st==end && a[st]%2==0) return a[st];
    if(st==end && a[st]%2 !=0) return 0;

    int mid= (st+end)/2 ;
    int s1 = calcSum_even(a,st,mid);
    int s2 = calcSum_even(a,mid+1,end);
    return s1+s2 ;
}

int main(){
    int a[]= {50,-400,1,-17,28,40,23,-25};
    int len = sizeof(a)/sizeof(a[0]);
    int res = calcSum_even(a,0,len-1);
    cout << "sum of even numbers: " << res ;
}