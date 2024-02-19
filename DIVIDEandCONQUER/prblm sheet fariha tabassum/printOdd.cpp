//Write a function print_odd using divide-and-conquer algorithm to print the odd numbers of an array
//of n integers.
// Created by User on 2/8/2024.
//
#include<iostream>
using namespace std;

void oddPrint(int a[],int st,int end){
     if(st==end && (a[st]%2 != 0)){
         cout<< a[st]<< " " ;
         return;
     }

     if(st==end && (a[st]%2 ==0))  return ;
     int mid= (st+end)/2 ;
    oddPrint(a,st,mid);
    oddPrint(a,mid+1,end);
}

int main(){
    int a[]= {5,-4,1,-17,18,22,23,-25};
    int len = sizeof(a)/sizeof(a[0]);
    cout << "odd integers: " << endl;
    oddPrint(a,0,len-1);
}