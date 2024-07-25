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
    int a,b,c,pw=0,du=1;
    cin>>a>>b>>c;
    bool flg=true;
    while(flg){
        du*=2;
        if(du==a){
            flg=false;
        }
        pw++;
    }
    cout<<(((pw-1)*c)+(pw*b))<<endl;
}
return 0;
}