#include<bits/stdc++.h>
#define int long long
using namespace std;
#define sp " "
int len=0,pp[100],t[100];

inline bool cpr(int n) {
  if (n<2) return false;
  for (int i = 2; i<=(sqrt(n)); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
void pf(int nn){
    int d=2;
    if(nn==1){
        pp[len]=2;
        t[len]=0;
        len++;
        return ;
    }
    if(cpr(nn)&&nn!=1){
        pp[len]=nn;
        t[len]=1;
        len++;
        return ;
    }
    while(nn>1){
        int k=0;
        while(nn%d==0){
            k++;
            nn/=d;
        }
        if(k>0){
            pp[len]=d;
            t[len]=k;
            len++;
        }
        d++;
        while(!(cpr(d))){
            d++;
        }
    }
    return ;
}

int32_t main(){
   int n;
   cin>>n;
    pf(n);
    for(int i=0;i<len;i++){
        cout<<pp[i]<<sp<<t[i]<<endl;
    }
    return 0;
}
