#include<iostream>
using namespace std;

int binarySearch(int a[], int len, int st, int end, int data){
    if(st <= end){
        int mid = (st+end)/2;
        if(data > a[mid]){
            return binarySearch(a,len,mid+1, end, data);
        }
        else if(data < a[mid]){
            return binarySearch(a,len,st,mid-1,data);
        }
        else if(data == a[mid]){
            return mid ;
        }
    }

    return -1;  // data not found//
}

int main(){
    int arr[]= { 10,20,31,33,35,40};
    int len= sizeof(arr)/ sizeof(arr[0]);
    int resultIndex = binarySearch(arr,len,0,len-1,15);

    if(resultIndex != -1)
        cout<< resultIndex<< endl ;
    else
        cout<< "Not found." ;
}