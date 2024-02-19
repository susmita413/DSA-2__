// x^y
// Created by User on 2/8/2024.
//
#include<iostream>
using namespace  std ;
int calc_power(int base, int pow){
    if(pow==0) return  1;
    if(pow==1) return base;
    int res = calc_power(base,pow/2);
    if(pow%2 ==0)
        return res*res ;
    else
        return res*res*base ;

}

int main(){
    int res = calc_power(4,6);
    cout<< res ;
}