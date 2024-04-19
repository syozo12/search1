#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&nums,int target){
    int n=nums.size();
    int lo=0;
    int hi=n-1;
    //last occurence
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(nums[mid]==target){
            if(mid==n-1){
                cout<<"last occurence is at"<<mid;
                break;
            }
            else if(nums[mid]!=nums[mid+1]){
                cout<<"last occurence is at"<<mid;
                break;
            }
            else lo=mid+1;
        }
        else if(nums[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return 0;
}
    int main(){
    int x;
    cout<<"enetr the target";
    cin>>x;
    vector<int>v={1,2,3,3,4,4,4,5};
    (search(v,x));
   
    return 0;
}