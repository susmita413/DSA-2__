//Write a recursive program to print the even numbers in a given range.
#include<bits/stdc++.h>
using namespace std;
int print_even(int st, int end){
    if(st %2 ==0){
        cout<< st << " " ;
    }
    if(st == end)
        return -1;
     print_even(st+1,end);
}

int main(){
    cout <<" even number from 3 to 140: " ;
     int indc = print_even(3,140);
     if(indc == -1)
         cout<< " end";
    return 0;
}
