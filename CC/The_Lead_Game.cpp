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
int t,cn1=0,cn2=0,l=0,w=0;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    if((a-b)>0){
        cn1+=(a-b);
    }else{
        cn2+=(b-a);
    }
    l=max(l,(abs(cn1-cn2)));
    if((cn1-cn2)==l){
        w=1;
    }else if((cn2-cn1)==l){
        w=2;
    }

}
    cout<<w<<sp<<l<<endl;
return 0;
}