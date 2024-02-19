// QUICK SORT DESCENDING
#include<iostream>
#include<iterator>
using namespace std;

int partition(int a[], int st, int end){
    int pivot = a[end];
    int i = st-1 ;
    for(int j= st; j<end; j++){
        if(a[j]>= pivot){
            swap(a[++i],a[j]);
        }
    }
    swap(a[++i],a[end]);
    return i ;
}

void quickSort_des(int a[], int st, int end){
    if(st<end){
        int mid= partition(a,st,end) ;
        quickSort_des(a,st,mid-1);
        quickSort_des(a,mid+1,end);
    }
}

int main(){
    int arr[] ={21,12,34,-9,10,11,22,0,-222,400,2,4,-9,34,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    quickSort_des(arr,0,len-1);
    copy(begin(arr), end(arr), ostream_iterator<int>(cout, " "));
}
