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
    int n;
        cin>>n;
        for(int i=1,x=n,y=1;i<=n;i++){
            if(i&1){
                cout<<x<<sp;
                x--;
            }
            else{
                cout<<y<<sp;
                y++;
            }
        }
        cout<<endl;
}
return 0;
}