// find maximum minimum from array
// Created by User on 2/8/2024.
//
#include<iostream>
#include<climits>
using namespace std ;

struct value{
    int max,min ;
};

struct value findMax_min(int a[],int st, int end){
    struct value final,c1,c2 ;
  //  final.max = INT_MIN , final.min = INT_MAX ;
    if(st==end){
        final.max= final.min = a[st];
        return final;
    }
    int mid = (st+end)/2 ;
    c1 = findMax_min(a,st,mid);
    c2 = findMax_min(a,mid+1,end);

    if(c1.max> c2.max)
        final.max = c1.max;
    else
        final.max= c2.max;

    if(c1.min> c2.min)
        final.min = c2.min;
    else
        final.min = c1.min ;

    return final ;
}

int main(){
    int a[]= {50,400,1,-170,28,40,23,-25};
    int len = sizeof(a)/sizeof(a[0]);
    struct value res = findMax_min(a,0,len-1);
    cout << "Maximum: " << res.max << endl ;
    cout << "Minimum: " << res.min ;

}