//8. Write a recursive program to find the sum of the elements of an array of size n.
//
#include<bits/stdc++.h>
using namespace std ;

int sum(int a[], int len, int curIndex){
    if(curIndex == len )
        return 0;
    return a[curIndex] + sum(a,len,curIndex+1) ;

}

int main(){
    int a[]= {10,2,-5,44,-50,0,1,100,-05};
    int len = sizeof(a)/sizeof(a[0]);

    int result= sum(a,len,0);
    cout<< "sum of array element: " << result ;
}
