// # check the number is "power of 2" or not
// Created by User on 1/25/2024.
//
#include<bits/stdc++.h>
using namespace std  ;

int powerof_two(int num){
    if(num %2 != 0){
        return 0;
    }
    if(num == 2){
        return 2 ;
    }
    return powerof_two(num/2);
}

int main(){
    int num =100;
    int res =  powerof_two(num);
    if(res == 2)
        cout << num << " is power of 2" ;
    else
        cout<< num << " is not power of 2" ;

}
