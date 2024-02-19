// quick sort // i++ , j--
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

int Partiiton(int arr[],int start,int end){
    int pivot=arr[start];
    int i = start;
    int j= end;
    while(i<j){
        while(arr[i]<=pivot){
            i++ ;
        }
        while(arr[j]>pivot){
            j-- ;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            //arrayPrint(arr,start,end);
        }
    }
    swap(arr[start],arr[j]);
    //cout<<"outWhile : " ;
    //arrayPrint(arr,start,end) ;

    return j;
}


void Quicksort(int arr[],int start, int end){
    if(start<end){
        int mid = Partiiton(arr,start,end);

        Quicksort(arr,start,mid-1);
        Quicksort(arr,mid+1,end);
    }
}

int main(){
    int arr[] ={21,12,34,-23,12,10,11,22,-23,-40,3,7,-1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    Quicksort(arr,0,len-1);

    arrayPrint(arr,0,len-1);   //1
    copy(begin(arr), end(arr), ostream_iterator<int>(cout, " ")); //2

}