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
    int a,b;
    cin>>a>>b;
    if((a+1)==b){
        yes;
    }else if((a+2)==b){
        yes;
    }else if((a==b)){
        yes;
    }else if(a==(b+1)){
        yes;
    }else if((a+1)==(b+1)){
        yes;
    }else if((a+2)==(b+1)){
        yes;
    }else{
        no;
    }
}
return 0;
}