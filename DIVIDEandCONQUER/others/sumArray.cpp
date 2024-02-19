// sum of all array element
//
#include<iostream>
using namespace std ;
int sumArray(int a[], int start, int end){
    if(start==end){
        return a[start];
    }
    else{
        int mid =(start+end)/2 ;
        int sum1 = sumArray(a,start,mid);
        int sum2= sumArray(a,mid+1,end);
        return sum1+sum2 ;
    }
}

int main(){
    int a[]= {10,20,30,-5,100,-50,40,5,8,-200};
    int size = sizeof(a)/sizeof(a[0]) ;
    int sum = sumArray(a,0,size-1) ;
    cout<< sum ;
}