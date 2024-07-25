#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "

// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
// return fib(n-1)+fib(n-2);
// }
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int32_t main(){
    FastAF
int t;
cin>>t;
t-=1;
int ans=fib(t);
cout<<ans<<endl;
return 0;
}
