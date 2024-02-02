// 14.Write a recursive program to print the prime numbers of an array of n integers
#include<iostream>
using namespace std ;

bool CheckPrime(int num, int startPrime=2){  // check the number is prime or not
    if(num == 2) return true ;
    if(num<=1 || (num % startPrime==0)) return false;
    if (startPrime*startPrime > num) return true;

    return CheckPrime(num,startPrime+1);  //recursive
}

void print_prime(int a[],int len){
    if(len == 0)
        return ;
    print_prime(a, len -1);  // recursive
    int num = a[len-1];
    if(CheckPrime(num)) // function call
        cout<< num << " " ;
}

int main(){
    int a[]={7,5,2,4,-2,-3,60,23};
    int len = sizeof(a)/sizeof(a[0]);

    cout<< "prime numbers of array: " ;
    print_prime(a,len);

}
