// Write a program that takes X and Y as input and calculates the value of X^Y using divide and conquer
//and prints it.
// Created by User on 2/8/2024.
//
#include<iostream>
using namespace std ;

int calc_power(int base,int pow){
    int h1,h2;
   // if(pow==0) return 1;
    if(pow==1) return base;
    int mid= pow/2 ;
    if(pow%2 ==0){
        h1 = calc_power(base,mid);
        h2 = calc_power(base,mid);
    }
    if(pow%2 != 0){
        h1 = calc_power(base,mid);
        h2 = calc_power(base,mid+1);
    }
     return h1*h2 ;
}

int main(){
    int res = calc_power(5,6);
    cout<< res ;
}