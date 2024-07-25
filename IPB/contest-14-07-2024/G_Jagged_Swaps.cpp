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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &a:v){
        cin>>a;
    }
    if(v[0]!=1){
        no;
    }else{
        yes;
    }
}
return 0;
}