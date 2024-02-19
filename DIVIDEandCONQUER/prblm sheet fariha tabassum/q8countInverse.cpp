// vid link - https://www.youtube.com/watch?v=MKLwJ6FOQcw&list=PL5aFYGJiN0KgFqM5w1Kw5O99IANxG3W3I&index=5
// COUNT INVERSION
// If i < j and A[i] > A[j], then the pair (A[i], A[j]) is called an inversion of an array A.
//
#include<iostream>
using namespace std ;

int merge(int a[], int st, int mid, int end){
    int l_size = mid-st +1 ;   // take size for left side array & right side array
    int r_size = end-mid ;

    int leftArr[l_size], rightArr[r_size];  // left side and right side array
    for(int i=0; i<l_size ; i++){           // copy elements from main array to left array
        leftArr[i] = a[st+i];
    }
    for(int i=0; i<r_size; i++){             // copy elements from main array to left array
        rightArr[i]= a[mid+1+i] ;
    }

    int l=0, r=0 , inv_Counter=0 ;          // l= left array index start from 0
                                            // r= right array index start from 0

    for(int i= st; i<=end; i++){        //COMBINE SOLLUTION  /**
        if(l == l_size){                    // when left array has 1 element
            a[i] = rightArr[r++];
        }
        else if(r== r_size){                // when right array has 1 element
            a[i]= leftArr[l++];
        }
        else if(leftArr[l]<= rightArr[r]){
            a[i]= leftArr[l++];
        }
        else if(leftArr[l]> rightArr[r]){
            a[i] = rightArr[r++] ;

            inv_Counter += (l_size - l) ;
        }
    }
    return inv_Counter;
}

int CI_mergeSort(int a[], int start , int end){
    if(start>end) return 0;
    else if(start== end) return 0 ;
    else if(start<end){
        int mid = start+ (end-start)/2 ;
        int res1 = CI_mergeSort(a,start,mid);
        int res2= CI_mergeSort(a,mid+1, end);
        int inv = merge(a,start,mid,end);
        return (res1+ res2 +inv) ;
    }
}

int main(){
    int arr[]= {1, 20, 6, 4, 5, 8, 4 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int inv = CI_mergeSort(arr,0,size-1);
    cout << inv ;
    return 0 ;
}

/*
 *   1, 20, 6, 4, 5, 8, 4 -> 10
 *   1, 20, 6, 4, 5, 8, 4, 6, 2, 5 -> 23
 *   8,4,-1,2,5 -> 6
 */