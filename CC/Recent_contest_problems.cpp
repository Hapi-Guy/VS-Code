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
    int d,cns=0,cnl=0;
    cin>>d;
    while(d--){
        string s;
        cin>>s;
        if(s[0]=='S'){
            cns++;
        }else{
            cnl++;
        }
    }
    cout<<cns<<sp<<cnl<<endl;
}
return 0;
}