//x^y and x^-y
// Created by User on 1/25/2024.
//
#include<bits/stdc++.h>
using namespace std  ;


double power(double num, int pow){
    if(pow < 0){
        return 1.00/(num*power(num,abs(pow)-1));
    }
    if(pow ==0 ){
        return 1.00;
    }
    return num * power(num,pow-1);
}

int main(){
    double num =8.00;
    int pow = -3;
    double res =  power(num,pow);
     cout<< num << "^" << pow << " = " << res ;
}