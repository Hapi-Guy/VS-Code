#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
int32_t main(){
    FastAF
int t;
cin>>t;
while(t--)
{
    int a,b,c,nd,ans;
    cin>>a>>b>>c;
    nd=a/2;
    if(a%2==0){
        ans=max((b*a),(nd*c));
    }else{
        a-=nd*2;
        ans=(a*b)+nd*c;
    }
    cout<<ans<<endl;
}
return 0;
}