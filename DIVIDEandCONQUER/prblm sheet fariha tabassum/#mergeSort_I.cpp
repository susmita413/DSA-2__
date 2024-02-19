// merge sort - using while

#include<iostream>
using namespace  std ;

void merge(int a[], int st, int mid, int end){
    int l_size = mid-st +1 ;
    int r_size = end-mid ;
    int leftArr[l_size], rightArr[r_size] ;

    for(int i=0; i<l_size ; i++){
        leftArr[i] = a[st+i];
    }
    for(int i=0; i<r_size; i++){
        rightArr[i] = a[mid+1 +i];
    }
    int l=0, r=0, mainInd= st ;

    while(l<l_size && r< r_size){
        if(leftArr[l] <= rightArr[r]){
            a[mainInd]= leftArr[l++];
        }
        else{
            a[mainInd]= rightArr[r++];
        }
        mainInd++ ;
    }

    if(l>= l_size){
        while(r< r_size){
            a[mainInd]= rightArr[r++];
            mainInd++ ;
        }
    }
    else{
        while(l< l_size){
            a[mainInd]= leftArr[l++];
            mainInd++ ;
        }
    }
}

void mergeSort(int a[], int st, int end){
    //if(st==end)return ;
     if(st<end){
        int mid = (st+end)/2 ;
        mergeSort(a,st,mid);
        mergeSort(a,mid+1,end);
        merge(a,st,mid,end);
    }
}

int main(){
    int arr[] = {40,20,-7,20,15,-30,150,-30,20,-10,10,5,-7,40,-7};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,size-1);
    cout<< "\nAfter sorting : " ;

    for(int i=0; i<size; i++){
        cout<< arr[i]<< " " ;
    }
}