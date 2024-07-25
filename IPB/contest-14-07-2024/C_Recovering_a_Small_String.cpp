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
    int t,n;
    char arr[3];
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(n<=28){
              arr[2]=(char)(n-3+97);
              arr[1]='a';
              arr[0]='a';
        }
        if(n>28 && n<=52){
              arr[2]='z';
              arr[1]=(char)(n-28+97);
              arr[0]='a';
        }
        if(n<=78 && n>52){
              arr[2]='z';
              arr[1]='z';
              arr[0]=(char)(n-53+97);
        }
        for(int i=0;i<3;i++){
                cout<<arr[i];
        }
        cout<<endl;
    }
return 0;
}