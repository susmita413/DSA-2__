// Find maximum and minimum

#include<iostream>
#include<climits>
using namespace std ;

struct value{
    int max,min ;
};

struct value GetMax_Min(int a[],int st,int end){
    struct value B1,B2,F ;
    if(st==end){
        F.max = a[st];
        F.min =a[st];
        return  F ;
    }
    else{
        int mid = (st+end)/2 ;

        B1 =  GetMax_Min(a,st,mid);
        B2 = GetMax_Min(a,mid+1,end);
        //F.max = -1, F.min =-1 ;
       // F.max = INT_MIN , F.min= INT_MAX ;

        if(B1.max>B2.max)       //final maximum
            F.max  = B1.max ;
        else
            F.max = B2.max ;

        if(B1.min> B2.min)     //final minimum
            F.min = B2.min ;
        else
            F.min = B1.min ;

        return F ;
    }
}

int main(){
    int a[]= {5,90,-10,3,50,1,15,-30,0,400,60};
    int len = sizeof(a)/sizeof(a[0]);

    struct value res = GetMax_Min(a,0,len-1);
    cout<<"maximum:" << res.max << endl;
    cout<<"minimum:" << res.min << endl;

}