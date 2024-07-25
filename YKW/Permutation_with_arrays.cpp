#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"no\n"
#define yes cout<<"yes\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
int32_t main(){
    FastAF
int t;
cin>>t;
vector<int> v(t);
vector<int> r(t);
for(auto &a:v){
    cin>>a;
}
sort(v.begin(),v.end());
for(auto &a:r){
    cin>>a;
}
sort(r.begin(),r.end());
bool flg=true;
for(int i=0;i<t;i++){
    if(v[i]!=r[i]){
        flg=false;
    }
}
if(flg){
    yes;
}else{
    no;
}
return 0;
}