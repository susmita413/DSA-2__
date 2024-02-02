//12. Write a recursive program to find the average of the elements of an array of size n
#include<iostream>
using namespace std;

int findSummation(int a[], int len){
    if(len == 0){
        return 0;
    }
    return a[len-1] + findSummation(a,len-1);
}

double getAverage(int a[], int len){
    if(len == 0 )
        return 0.0 ;
    else
        return findSummation(a,len)/(static_cast<double>(len)) ;
}


int main(){
    int a[]= {10,220,30,50,60,555};
    int length = sizeof(a)/sizeof(a[0]);

    double result = getAverage(a,length);
    cout<< " the average of the elements of array: " << result ;
}
