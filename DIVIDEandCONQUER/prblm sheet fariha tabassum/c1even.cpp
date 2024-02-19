// count even number from array
// Created by User on 2/5/2024.
//
#include<iostream>
using namespace std;

int countEven(int a[], int st,int end){
    if(st==end && a[st]%2 ==0) return 1  ;     //base case
    if(st==end && a[st]%2 !=0) return 0 ;     //base case

    int mid = (st+end)/2 ;            //divide

    int c1 = countEven(a,st,mid);       //sollution for 1st half// conquere
    int c2 = countEven(a,mid+1,end);    //sollution for 2nd half//
    return c1+c2 ;                        // combine
}

int main(){
    int a[]= {5,90,-12,3,50,16,15,-30,0,406,60};
    int len = sizeof(a)/sizeof(a[0]);
    int even = countEven(a,0,len-1);
    cout << "number of even integer: " << even ;

}