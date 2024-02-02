//13. Write a recursive program to print the odd/even numbers of an array of n integers
#include<bits/stdc++.h>
using namespace std;

void print_Odd(int a[],int len ){
    if(len ==0){
        return ;
    }
    print_Odd(a,len-1);
    if(a[len-1] % 2 != 0){
        cout<< a[len-1]<< " " ;
    }
}

void print_Even(int a[],int len ){
    if(len ==0){
        return ;
    }
    print_Even(a,len-1);
    if(a[len-1] % 2 == 0){
        cout<< a[len-1]<< " " ;
    }
}

int main(){
    //int a[]={2,45,5,4,-5,33,-8,11,0,40};
    int a[]={21,46,-501,41};

    int len = sizeof(a)/sizeof(a[0]);

    cout<< "Odd numbers of array: " ;
    print_Odd(a,len);
    cout<< "\nEven numbers of array: " ;
    print_Even(a,len);
}

