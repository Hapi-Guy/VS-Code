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
    int g=3,mi=101,ans=0,po=-1;
    vector<int> v;
    while(g--){
        int d;
        cin>>d;
        mi=min(mi,d);
        v.push_back(d);
    }
    auto f=find(v.begin(),v.end(),mi);
    po=f-v.begin();
    for(int i=0;i<3;i++){
        if(i!=po){
            ans+=v[i];
        }
    }
    cout<<ans<<endl;
}
return 0;
}