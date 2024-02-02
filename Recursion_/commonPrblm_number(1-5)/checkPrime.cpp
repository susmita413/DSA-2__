// recursively check the number is prime or not

#include<iostream>
using namespace std ;

bool checkNumberIsPrime(int num, int i=2){
    if(num <= 1)
        return false ;
    if(num % i == 0 && i< num)  //false for i=2
        return false;
    if((i*i>num) || num == 2)
        return true ;

    return checkNumberIsPrime(num,i+1);

}

int main(){
    int num =17 ;
    if(checkNumberIsPrime(num))
        cout<< num << " is Prime.\n" ;
    else
        cout<< num << " is Not Prime.\n" ;
}