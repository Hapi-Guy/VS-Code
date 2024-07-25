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
    vector<int> v(3),v1(3);
    for(int &a:v){
        cin>>a;
    }
    for(int &a:v1){
        cin>>a;
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    if((v[1]+v[2])==(v1[1]+v1[2])){
        cout<<"Tie"<<endl;        
    }else{
        cout<<(((v[1]+v[2])>(v1[1]+v1[2]))?"Alice":"Bob")<<endl;
    }
}
return 0;
}