// Write a recursive program to check if a given string is a palindrome or not (not case
//sensitive, ignore whitespaces)

#include<iostream>
#include<cctype>
using namespace std ;

bool check_Palindrome(string a, int st, int end){
    if(st>end)
        return true ;
    if(a[st] != a[end])
        return false ;
   return check_Palindrome(a,st+1,end-1);
}

int main(){
    string a = "A plan NA  LP    a" ;
    int len = a.length() ;
    string a2 ;

    for(int i=0; i<len ;i++){
        if( !isspace(a[i]))
            a2 += tolower(a[i]); // appand //

    }
    cout<<"1st string length: " <<a.length() << "\n 2nd string: "<< a2<< " , length: " << a2.length() << endl ;
    bool result = check_Palindrome(a2,0,(a2.length())-1) ;

    cout << "is the string pallindrome? " << (result ? "Yes" : "No") << endl ;
}
