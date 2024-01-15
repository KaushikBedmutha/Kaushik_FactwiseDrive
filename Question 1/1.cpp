#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    // Taken Input As per Question
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)cin>>nums[i];

    //Solution
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    int cnt=0;
    int k=0;
    for(auto it: s){
        nums[k++] = it;
        cnt++;
    }
    for(int i=cnt;i<n;i++){
        nums[i] = -1;
    }

    // Final Output 
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    //Time Complexity --> worstcase: O(nlogn), bestcase: O(logn)
    // Space Complexity --> O(n)
    


    
}