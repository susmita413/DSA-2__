//
// Created by User on 1/25/2024.
//

#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 1){
        return 1 ;
    }
    return num * factorial(num-1);
}
int main(){
    int res = factorial(8);
    cout<< res ;
    return 0;
}