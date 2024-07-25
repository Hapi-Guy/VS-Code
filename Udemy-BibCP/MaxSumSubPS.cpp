#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
#define N INT_MAX

int s[N];

int MAXpsu(int ar[],int n){
    s[0]=ar[0];
    for(int i=1;i<n;i++){
        s[i]=s[i-1]+ar[i];
    }
    int ans=0,j=s[0],prev=s[0];
    for(int i=1;i<n;i++){
        j=min(j,s[i]);

        
        prev=max(prev,s[i]);
    }
    return prev-j;
}

int32_t main(){
    FastAF
    int a[7]={5,-6,3,4,-2,3,-3};
    int nn=7;
    cout<<MAXpsu(a,nn)<<endl;
return 0;
}