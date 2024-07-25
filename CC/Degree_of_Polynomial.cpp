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
    int n,mx=0,i=0;
    cin>>n;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
        if(a!=0){
            mx=i;
        }
        i++;
    }
    cout<<mx<<endl;
}
return 0;
}