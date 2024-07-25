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
    int n,cnt=0;
    cin>>n;
    vector<char> v(n);
    for(auto &a:v){
        cin>>a;
    }
    for(int i=0;i<(v.size());i++){
        if(v[i]=='*'&&v[i+1]=='*'){
            break;
        }else{
            if(v[i]=='@'){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
return 0;
}