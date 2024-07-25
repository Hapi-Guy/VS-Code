// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define double long double
// #define endl '\n'
// #define no cout<<"NO\n"
// #define yes cout<<"YES\n"
// #define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define sp " "
// int32_t main(){
//     FastAF
// int t;
// cin>>t;
// while(t--)
// {
//     int n,m;
//     cin>>n>>m;
//     string a,b;
//     cin>>a>>b;
//     int mi=m;
//     for (int i=0;i<=n-m;i++) {
//         int d = 0;
//         for(int j=0;j<m;j++) {
//             if(a[i+j]!=b[j]){
//                 d++;
//             }
//         }
//         mi = min(mi,d);
//     }
// cout<<mi<<endl;
// }
// return 0;
// }
/* OC
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
    int a,b,mi=101;
    cin>>a>>b;
    string s,r;
    cin>>s>>r;
    int d=(a-b)+1;
    for(int i=0;i<d;i++){
        string g=s.substr(i,b);
        int pc=0;
        for(int j=0;j<b;j++){
            if(g[j]!=r[j]){
                pc++;
            }        
        }
        mi=min(mi,pc);
    }
    cout<<mi<<endl;
}
return 0;
}*/