//10. Write a recursive program to find the maximum of the elements of an array of size n.

#include<bits/stdc++.h>
using namespace std ;

int findMax(int a[], int len){
     if(len == 0)
         return a[0];
     int max = findMax(a,len-1); // finding maximum element among the rest of the array//
 /*  if(max< a[len-1]){
         max = a[len-1];
       }
     return max ;
     */

     return (max< a[len-1]) ?  a[len-1]: max ;
}

int findMax_2(int a[], int len){
    if(len == 0)  return a[0];
                               // finding maximum element among the rest of the array//
    return ( findMax_2(a,len-1)< a[len-1]) ?  a[len-1]:  findMax_2(a,len-1) ;
}

int main(){
    int a[]= {22,55,30,-3,222,0,-55};
    int length = sizeof(a)/sizeof(a[0]);

    int result = findMax_2(a,length);
    cout<< " the maximum of the elements of array: " << result ;
}

