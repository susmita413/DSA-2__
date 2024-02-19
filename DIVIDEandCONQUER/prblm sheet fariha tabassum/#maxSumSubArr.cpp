//find maximum sum from subarray
#include<iostream>
#include<climits>
using namespace std ;


int maximum(int a, int b, int c){
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}

int maxCrossing_SubArray(int a[], int low, int high,int mid){
    int left_res = INT_MIN;
    int sum=0 ;
    for(int i=mid; i>=low; i--){
       sum= sum+ a[i];
        if(left_res<= sum){
            left_res= sum ;
        }
    }
    int right_res = INT_MIN;
    sum=0 ;
    for(int i=mid+1; i<=high; i++){
        sum= sum + a[i];
        if(right_res <= sum){
            right_res= sum ;
        }
    }
    return left_res+right_res ;
}

int max_sumSubArray(int a[], int low, int high){
    if(low==high){
        return a[low];
    }
    int mid= (low+high)/2 ;
    int leftSum = max_sumSubArray(a,low,mid);
    int rightSum = max_sumSubArray(a,mid+1,high);
    int crossSum= maxCrossing_SubArray(a,low,high,mid);

    return maximum(leftSum,rightSum,crossSum);
}


int main() {
    int arr[] = {90,-16,-23,18,25,-7,-12,-5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int sumOfSubArr = max_sumSubArray(arr, 0, n - 1);
    cout << "maximum sum of subarrays: " << sumOfSubArr << endl;

    return 0 ;
}

