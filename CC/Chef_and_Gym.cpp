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
    int x,y,z;
    cin>>x>>y>>z;
    int dif=z-x;
    if(x>z){
        cout<<"0"<<endl;
    }else if(y>dif){
        cout<<"1"<<endl;
    }else{
        cout<<"2"<<endl;
    }
}
return 0;
}