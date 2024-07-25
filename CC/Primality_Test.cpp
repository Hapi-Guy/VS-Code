#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"no\n"
#define yes cout<<"yes\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
inline bool chkp(int n) {
  if (n == 1) return false;
  for (int i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int32_t main(){
    FastAF
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(chkp(n)){
        yes;
    }else{
        no;
    }
}
return 0;
}