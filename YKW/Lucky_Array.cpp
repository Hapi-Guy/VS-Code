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
int t,mi=1e6,cnt=0;
cin>>t;
int ar[t];
for(int i=0;i<t;i++){
    cin>>ar[i];
    mi=min(mi,ar[i]);
}
for(int i=0;i<t;i++){
    if(mi==ar[i]){
        cnt++;
    }
}
if(cnt%2==0){
    cout<<"Unlucky"<<endl;
}else{
    cout<<"Lucky"<<endl;
}
return 0;
}