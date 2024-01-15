#include<bits/stdc++.h>
using namespace std;
// Soln--> 
//using the concept of the Binary Search....
int Fun(int arr[],int n,int low,int high,int target){
    int mid;
    while(low<=high){
         mid = (low+high)/2;

        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return (mid+1);
}
int main(){
    int n;
    //Taking the Input as per the Question
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int target;
    cin>>target;

    // Solution
    int low = 0,high = n-1;
    int result = Fun(A,n,low,high,target);
    
    //Final Output
    cout<<result<<endl;


    // Time Complexity ---> O(log n)
}