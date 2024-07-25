#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "

int MAXgrd(int ar[],int n,int *st,int *en){
    int sum=0,ans=ar[0];
    for(int i=0;i<n;i++){
        if(sum==0){
            *st=i+1;
        }
        sum+=ar[i];
        if(ans<sum){
            ans=sum;
            *en=i+1;
        }
        if(sum<0){
            sum=0;
        }
    }
    return ans;
}

int32_t main(){
    FastAF
    int s=0,e=0;
    int a[7]={5,-6,3,4,-2,3,-3};
    cout<<MAXgrd(a,(sizeof(a)/sizeof(a[0])),&s,&e)<<sp<<s<<sp<<e<<endl;
return 0;
}