// 7. Write a recursive program to print an array of size n in reverse order.

#include<bits/stdc++.h>
using namespace std;

int printReverse(int a[],int st, int len){
    if(st == len) return 0;

    cout<< a[len-1]<< " " ;
    return printReverse(a,st,len-1);
}

int main(){
    int a[]={2,45,55,-34,12,23,6,-3};
    int len = sizeof(a)/sizeof(a[0]);
    cout<< " array print reverse order: " ;
    printReverse(a,0,len);
}
