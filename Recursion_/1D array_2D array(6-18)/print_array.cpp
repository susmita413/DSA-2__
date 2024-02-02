//Write a recursive program to print an array of size n in given order.
//
#include<bits/stdc++.h>
using namespace std;

int print_Array(int a[],int st, int len){
   if(st == len) return 0;

   cout<< a[st]<< " " ;
   return print_Array(a,st+1,len);
}

int main(){
   int a[]={2,45,55,-34,12,23};
   int len = sizeof(a)/sizeof(a[0]);
   cout<< " array print: " ;
   print_Array(a,0,len);
}