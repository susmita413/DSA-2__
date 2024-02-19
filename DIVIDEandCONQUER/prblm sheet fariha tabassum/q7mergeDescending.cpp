// Merge sort//
#include<iostream>
using namespace std ;

void merge(int a[],int st, int mid, int end){
    int l_size = mid-st +1 ;   // taken size for left side array
    int r_size = end-mid ;     // take size for right side array

    int leftArr[l_size], rightArr[r_size];  // left side and right side array
    for(int i=0; i<l_size ; i++){           // copy elements from main array to left array
        leftArr[i] = a[st+i];
    }
    for(int i=0; i<r_size; i++){             // copy elements from main array to left array
        rightArr[i]= a[mid+1+i] ;
    }

    int l=0, r=0 ;                           // l= left array index, start from 0
    // r= right array index, start from 0

    for(int i= st; i<=end; i++){  //COMBINE SOLLUTION  /**
        if (l < l_size && (r >= r_size || leftArr[l] >= rightArr[r])){
            a[i] = leftArr[l];
            l++;
        }
        else {
            a[i] = rightArr[r];
            r++;
        }

    }
}

void mergeSort(int a[],int start, int end){
    if(start== end){
        return;                   //CONQUER
    }
    else if(start<end){
        int mid = (start+end)/2 ;  // DIVIDE
        mergeSort(a,start,mid);     //CONQUER
        mergeSort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}

void arrayPrint(int arr[],int start, int end){
    if(start == end+1) return ;

    cout << arr[start]<< " " ;
    arrayPrint(arr,start+1,  end);
}

int main(){
    int arr[]= {14,15,60,50,40,30,20,10,9,15,4,9,15,-2,-17};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);

    cout<<" AFTER SORTING: " ;
    arrayPrint(arr,0,size-1);
    return 0 ;
}
