#include<iostream>
using namespace std;
int find(int a[],int n,int x){
    //first occurense
    int f=-1;
    int l=-1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(a[mid]==x){
            if(mid==0){
                f=mid;
                break;
            }
            else if(a[mid]!=a[mid-1]){
                f=mid;
                break;
            }
            else hi=mid-1;
        }
        else if(a[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    lo=0;
    hi=n-1;
    //last occurence
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(a[mid]==x){
            if(mid==n-1){
                l=mid;
                break;
            }
            else if(a[mid]!=a[mid+1]){
                l=mid;
                break;
            }
            else lo=mid+1;
        }
        else if(a[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    cout<<"number of "<<x<<"s"<<" is "<<(l+1)-f;
    return 0;
    

}
int main(){
    int x;
    cout<<"enetr the number to be seraced";
    cin>>x;
    int a[6]={0,0,0,0,1,1};
    find(a,6,x);
}