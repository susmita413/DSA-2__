// find sum of array element, condition: elements<50 or elements>100
// Created by User on 2/19/2024.
//
#include<iostream>
using namespace std ;

int sumArray(int a[], int start, int end){
    if(start==end){
        if(a[start]<50 || a[start]>100) return a[start];
        else return 0;
    }
    int mid =start+(end-start)/2 ;
    int sum1 = sumArray(a,start,mid);
    int sum2= sumArray(a,mid+1,end);
    return sum1+sum2 ;
}

int main(){
    int a[]= {50,60,70,80,90,100,49,99,101,51,-200};
    int size = sizeof(a)/sizeof(a[0]) ;
    int sum = sumArray(a,0,size-1) ;
    cout<< sum ;
}