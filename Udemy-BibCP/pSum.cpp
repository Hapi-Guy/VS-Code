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
void buildps(int a[],int n){
    s[0]=a[0];
    for(int i=1;i<n;i++){
        s[i]=s[i-1]+a[i];
    }
}
int q(int a,int b){
    return s[b-1]-s[a-2];
}

int32_t main(){
    FastAF
    int t[9]={-9,8,4,-6,11,120,-44,30,-70};
    int n=9;
    buildps(t,n);
    cout<<q(8,9)<<endl;

return 0;
}
