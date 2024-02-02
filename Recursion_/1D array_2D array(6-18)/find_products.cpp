//9. Write a recursive program to find the products of the elements of an array of size n.
#include<iostream>
using namespace std;

int findProduct(int a[], int size,int curIndex){
    if(curIndex == size){
        return 1;
    }
    return a[curIndex] * findProduct(a,size,curIndex+1);
}

int main(){
    int length ;
    int a[100];
    cout<< "length? - " ;
    cin>> length ;
    cout<< "\ngive array elements in integer:" ;

    for(int i=0; i<length ; i++ ){
        cin>> a[i] ;
    }
    int result = findProduct(a,length,0);
    cout<< "\n the products of the elements of array: " << result ;
}
