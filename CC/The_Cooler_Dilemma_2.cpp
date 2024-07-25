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
    int x,y;
    cin>>x>>y;
    if(x<=y){
        if(y%x==0){
            cout<<((y/x)-1)<<endl;
        }else{
            cout<<((y/x))<<endl;
        }
    }else{
        cout<<"0"<<endl;
    }
}
return 0;
}