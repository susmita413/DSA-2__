// 4.Write a recursive program to check if a given string is a palindrome or not (not case
//sensitive, ignore whitespaces)

#include<bits/stdc++.h>
using namespace std ;

bool check_Palindrome(string a, int st, int end) {
    if (st >= end)
        return true;
    if (a[st] == ' ')
        return check_Palindrome(a, st + 1, end );
    if(a[end] == ' ')
        return check_Palindrome(a, st, end-1 );
    if (tolower(a[st]) != tolower(a[end]))
        return false;


    return check_Palindrome(a,st+1, end-1);
}

int main(){
    string a = "Ma dd A m" ;
    bool result = check_Palindrome(a,0,(a.length())-1) ;

    cout << "is the string pallindrome? " << (result ? "Yes" : "No") << endl ;
}
