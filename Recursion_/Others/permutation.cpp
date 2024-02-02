//permutation - all possible set print // nPn = n!

#include<iostream>
#include<string> //not necessary//
using namespace std ;

void permutation(string s, int st, int end){
    if(st == end){
        cout<< s <<endl ;
        return ;
    }
    for(int i =st ; i<end ; i++){
        swap(s[st],s[i]);
        permutation(s,st+1, end);
        swap(s[st],s[i]);
    }
}


int main(){
    string s ;
    cin>> s ;
    permutation(s,0,s.length());
}