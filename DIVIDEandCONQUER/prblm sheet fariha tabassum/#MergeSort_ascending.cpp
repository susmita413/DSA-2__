#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int l, int mid, int h){
    int temp[h];                 //h -> high
    int i = l ;                       // i= INDEX, LOW TO MID (1ST PART of array)
    int j = mid+1 ;                   // j= INDEX, mid+1 to High (2ND PART of array)
    int k =l ;                        // k= INDEX OF TEMP ARRAY
    while(i<=mid && j<=h){            //when i= mid+1 OR j= high+1 , LOOP WILL BE STOP
        if(A[i] <= A[j]){
            temp[k] = A[i++];         // COMPARE 1st part array element to 2nd part array element
        }                             // then SMALLER ELEMENT WILL BE COPYED IN TEMP ARRAY
        else{                         //HERE, elements copied in TEMP ARRAY from INDEX= low TO high
            temp[k] = A[j++];
        }                            // after COPYING, index of SELECTED PART (1st or 2nd) will increased by 1
        k++ ;                 // ->> and also , INDEX OF TEMP ARRAY WILL INCREASED BY 1.
    }                       // ->> END OF COMPARING

    if(i>mid){
        while(j<=h){               //IF, INDEX i= MID+1 THAT MEANS ALL 1ST PART elements successfully copied
            temp[k] = A[j++];      // so, 2nd part elements will be copied SERIALLY, because they are ALREADY SORTED
            k++ ;
        }
    }
    else{                      //else INDEX j= HIGH+1 THAT MEANS ALL 2nd PART elements successfully copied
        while(i<=mid){          // so, 1ST part elements will be copied SERIALLY, because they are ALREADY SORTED
            temp[k]= A[i++] ;
            k++ ;
        }
    }
    for(k=l ; k<=h ;k++){    // after all compare and coping, sorted ELEMENTS  COPIED FROM TEMP ARRAY TO MAIN ARRAY
        A[k] = temp[k];
    }
}


void DivideNConqure(int A[],int low,int high){
    if(low<high){
        int mid = (low+high)/2 ;
        DivideNConqure(A,low,mid);
        DivideNConqure(A,mid+1 , high);
        merge(A,low,mid,high);
    }
}


int main(){
    int arr[] = {40,20,-7,20,15,-30,100,30,20,-10,10,5,-7,40,-7};
    int size = sizeof(arr)/sizeof(arr[0]);

    DivideNConqure(arr,0,size-1);
    cout<< "\nAfter sorting : " ;

    for(int i=0; i<size; i++){
        cout<< arr[i]<< " " ;
    }
}