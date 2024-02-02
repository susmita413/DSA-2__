//9. Write a recursive program to find the products of the elements of an array of size n.
#include<iostream>
using namespace std ;

int findProduct(int a[], int size){
    if(size == 0){
        return 1;
    }
    return a[size-1] * findProduct(a,size-1);
}

int main(){
    int a[]= {10,33,-33,1,2,-3};
    int len = sizeof(a)/sizeof(a[0]);

    int result = findProduct(a,len);
    cout<< " the products of the elements of array: " << result ;
}

