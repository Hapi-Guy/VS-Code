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
int a,b;
cin>>a>>b;
int ar[a],arr[b],ck[b],c[b];
map<int, int> IM;
for(int i=0;i<a;i++){
    cin>>ar[i];
    IM[ar[i]]=i;
}
for(int i=0;i<b;i++){
    cin>>arr[i];
}
for(int i=0;i<b;i++){
    ck[i]=IM[arr[i]];
    c[i]=ck[i];
}
bool flg=true;
sort(ck,ck+b);
for(int i=0;i<b;i++){
    if(c[i]!=ck[i]){
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

