//find maximum sum from subarray
#include<iostream>
#include<climits>
using namespace std ;


int maximum(int a, int b, int c){  // Function to return the maximum of three numbers
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}

int maxCrossing_SubArray(int a[], int low, int high,int mid){ //find the maximum possible sum of a subarray
                                                              // crossing the midpoint
    int left_res = INT_MIN;      // Initialize left_res to the smallest possible integer
    int sum=0 ;
    for(int i=mid; i>=low; i--){   // Calculate maximum sum of subarray ending at midpoint on the left side
       sum= sum+ a[i];
        if(left_res<= sum){      // here sum= sum of all leftSide ELEMENTS
            left_res= sum ;      // left_res= only maximum sum of left subarray
        }
    }
    int right_res = INT_MIN;     // Initialize right_res to the smallest possible integer
    sum=0 ;
    for(int i=mid+1; i<=high; i++){   // Calculate maximum sum of subarray starting from midpoint on the right side
        sum= sum + a[i];
        if(right_res <= sum){     // here sum= sum of all RIGHT Side ELEMENTS
            right_res= sum ;      // right_res= only maximum sum of RIGHT subarray
        }
    }
    return left_res+right_res ;  // Return MAXIMUM SUM on left and right of midpoint
}

int max_sumSubArray(int a[], int low, int high){  // Main function implementing the Divide and Conquer approach
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

