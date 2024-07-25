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
    int d;
    cin>>d;
    vector<int> v(d);
    for(auto &a:v){
        cin>>a;
    }
    sort(v.begin(),v.end());
    bool flg=true;
    for(int i=0;i<d;i++){
        if(v[i]>i+1){
            flg=false;
        }
    }
    if(flg){
        yes;
    }else{
        no;
    }
}
return 0;
}
/* prev
wrong for 
1
6
1 2 3 5 5 5

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
    int d;
    cin>>d;
    vector<int> v(d);
    for(auto &a:v){
        cin>>a;
    }
    sort(v.begin(),v.end());
    int mx=v[d-1],cnt=0;
    for(int a:v){
        if(a==mx){
            cnt++;
        }
    }
    if(v[0]!=1){
        no;
        continue;
    }else if((v.size())==mx){
        if(cnt>1){
            no;
        }else{
            yes;
        }
    }else{
        yes;
    }
}
return 0;
}*/