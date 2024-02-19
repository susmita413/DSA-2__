//
// Created by User on 2/9/2024.
//

#include<iostream>
#include<iterator>
using namespace std;

void arrayPrint(int arr[],int start, int end){
    if(start == end+1) {
        cout<<"next" <<endl ;
        return ;
    }
    cout << arr[start]<< " " ;
    arrayPrint(arr,start+1,  end);
}

int partition(int a[],int st, int end){
    int pivot = a[end];
    int i = st-1 ;
    for(int j=st; j<= end-1;j++){
        if(a[j]<=pivot){
            i++ ;
            swap(a[i],a[j]);
           // arrayPrint(a,st,end);
        }
    }
    i++ ;
    swap(a[i],a[end]);
    //arrayPrint(a,st,end);
    return i ;
}

void quickSort(int a[],int st, int end){
    if(st<end){
        int mid = partition(a,st,end);
        quickSort(a,st,mid-1);
        quickSort(a,mid+1,end) ;
    }
}

int main(){
    int arr[] ={21,12,34,-9,10,11,22,0,-222,400,2,4,-9,34,34};
    int len = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,len-1);

    arrayPrint(arr,0,len-1);   //1
    copy(begin(arr), end(arr), ostream_iterator<int>(cout, " ")); //2

}