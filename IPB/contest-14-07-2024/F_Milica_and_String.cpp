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
//     int n,op,b=0,bcnt=0,nu;
//     cin>>n>>op;
//     vector<char> v(n);
//     for(auto &a:v){
//         cin>>a;
//         if(a=='B'){
//             b++;
//         }
//     }
//     if((b==0&&op==0)||(b==op)){
//         cout<<"0"<<endl;
//     }else if(op==0&&b!=0){
//         cout<<"1"<<endl;
//         cout<<n<<sp<<"A"<<endl;
//     }else if(b>op){
//         for(int i=n-1;i>=0;i--){
//             if(v[i]=='B'){
//                 bcnt++;
//             }
//             if(bcnt==op){
//                 nu=i;
//                 break;
//             }
//         }
//         cout<<"1"<<endl<<nu<<sp<<"A"<<endl;
//     }else if(op>b){
//         cout<<"1"<<endl<<op<<sp<<"B"<<endl;
//     }
// }
// return 0;
// }
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
    int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cot=0,bot=0;
        int l = count(s.begin(),s.end(),'A');
        int m = count(s.begin(),s.end(),'B');
        if(m==k) cout << "0" << endl;
        else if(m>k)
        {
            for(int i=n-1; i>=0; i--)
            {
                if(cot==k) break;
                bot++;
                if(s[i]=='B') cot++;
            }
            cout<<"1"<<endl<<n-bot<<sp<<"A"<<endl;
        }else
        {
            int f=k-m,i;
            for(i=0;i<n;i++){
                if(s[i]=='A') f--;
                if(f==0) break;
            }
            cout<<"1"<<endl<<i+1<<sp<<"B"<<endl;
        }
}
return 0;
}