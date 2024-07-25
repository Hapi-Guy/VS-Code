#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp ' '

int len=0,pp[100],tt[100];

inline bool cpr(int n){
    if(n<2) return false;
    for(int i=2;i<=(sqrt(n));i++){
        if(n%i==0){
            return false;
        }
    }
return true;
}

void pf(int nn){
    int d=2;
    if(nn==1){
        pp[len]=2;
        tt[len]=0;
        len++;
    }else if(cpr(nn)){
        pp[len]=nn;
        tt[len]=1;
        len++;
    }
    while(nn>1){
        int k=0;
        while(nn%d==0){
            k++;
            nn/=d;
        }
        if(k>0){
            pp[len]=d;
            tt[len]=k;
            len++;
        }
        d++;
        while(!(cpr(d))){
            d++;
        }
    }
}
int main(){
    FastAF
    int t;
    cin>>t;
    pf(t);
    for(int i=0;i<len;i++){
        cout<<pp[i]<<sp<<tt[i]<<endl;
    }
return 0;
}


