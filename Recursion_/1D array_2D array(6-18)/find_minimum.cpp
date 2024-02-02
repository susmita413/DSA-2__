//11. Write a recursive program to find the minimum of the elements of an array of size n
#include<bits/stdc++.h>
using namespace std ;

int findingMinimum(int a[], int len){
    if(len ==0)
        return a[0];

    int min = findingMinimum(a,len-1);
    if(min> a[len-1])
        min = a[len-1] ;

    return min ;
}

int main(){
    int a[]= {22,55,30,-3,222,0,55};
    int length = sizeof(a)/sizeof(a[0]);

    int result = findingMinimum(a,length);
    cout<< " the minimum of the elements of array: " << result ;
}
