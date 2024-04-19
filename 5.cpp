#include<iostream>
using namespace std;
int perfectsq(int n){
    int hi=n;
    int lo=0;
    bool flag=false;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        long long m=mid;
        long long y=n;
        if(m*m==y){
            flag=true;
            return 1;
        }
        else if(m*m>y) hi=mid-1;
        else lo=mid+1;
    }
    if(!flag) return 0;
    
}
int main(){
    int n;
    cout<<"ente rthe number ";
    cin>>n;
    if(perfectsq(n)) cout<<"it is a perfect suare";
    else cout<<"it is not a perfect sqare";
    return 0;

}
