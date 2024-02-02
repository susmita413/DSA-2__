//15. Write a recursive program to count the odd/even numbers of an array of n integers
#include<iostream>
#include<utility>
using namespace std ;

 pair<int,int> countOdd_even(int a[], int len, int odd=0, int even=0 ){
    if(len == 0)
        return make_pair(odd,even);
    if(a[len-1] % 2 == 0)
        return countOdd_even(a,len-1,odd,even+1) ;
    if(a[len-1]%2 != 0)
        return countOdd_even(a,len-1,odd+1,even) ;
}

int main(){
    int a[]={2,45,5,4,-5,33,-8,11,0,40};
    int len = sizeof(a)/sizeof(a[0]);

    pair<int,int> res = countOdd_even(a,len);
    // auto res0 = countOdd_even(a,len);

    cout<< "Odd numbers of array: " << res.first ;
    cout<< "\nEven numbers of array: " << res.second ;

}
