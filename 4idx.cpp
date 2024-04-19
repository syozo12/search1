#include<iostream>
#include<vector>
using namespace std;
int find(int a[],int n){
    int lo=0;
    int hi=n-1;
    int mid;
    bool flag=false;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(a[mid]==mid+1){
           lo=mid+1;
        }
        else if(a[mid]==mid){
            if(a[mid]==a[mid-1]){
                flag=true;
                break;
                
            }
            else hi=mid-1;
        }

    }
    return mid;

}
int main(){
    int a[5]= {1,2,3,3,4};
    cout<<"the repeated element is ";
    cout<<a[find(a,5)];


}