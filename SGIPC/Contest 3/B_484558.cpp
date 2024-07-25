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
// string s;
// bool flg=true;
// while(flg){
//     int ans;
//     ans=t%16;
//     if(ans>9){
//         switch(ans){
//         case 10:
//         s+='A';
//         break;
//         case 11:
//         s+='B';
//         break;
//         case 12:
//         s+='C';
//         break;
//         case 13:
//         s+='D';
//         break;
//         case 14:
//         s+='E';
//         break;
//         case 15:
//         s+='F';
//         break;
//         }
//     }else{
//         s+=to_string(ans);
//     }
//     t/=16;
//     if(t<=0){
//         flg=false;
//     }
// }
// //reverse(s.begin(), s.end());
// if(s.size()<2){
//     cout<<"0"<<s<<endl;
// }else{
//     cout<<s<<endl;
// }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int32_t main(){
    FastAF
    int t;
    cin >> t;
    string s;
    if (t == 0) s = "0";
    while (t > 0) {
        int ans = t % 16;
        if (ans > 9) {
            s += 'A' + (ans - 10);
        } else {
            s += to_string(ans);
        }
        t /= 16;
    }
    reverse(s.begin(),s.end());
    if(s.size()<2){
        cout<<"0"<<s<<endl;
    }else{
    cout << s << endl;
    }
    return 0;
}