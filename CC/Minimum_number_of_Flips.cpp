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
    int g=n;
    int ng=0,p=0;
    while(g--){
        int a;
        cin>>a;
        if(a==(-1)){
            ng++;
        }else if(a==1){
            p++;
        }
    }
    if(n%2!=0){
        cout<<"-1"<<endl;
    }else{
        if(ng>p){
            cout<<((n/2)-p)<<endl;
        }else if(ng==p){
            cout<<"0"<<endl;
        }else{
            cout<<((n/2)-ng)<<endl;
        }
    }

}
return 0;
}