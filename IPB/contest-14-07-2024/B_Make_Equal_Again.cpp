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
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        sum=1;
    }else{
        int a=1,b=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                a++;
            }else{
                break;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]==arr[i+1]){
                b++;
            }else{
                break;
            }
        }
        if(arr[0]==arr[n-1]){
            if(a+b>n){
                sum=n;
            }else{
                sum=a+b;
            }
        }else{
            sum=max(a,b);
        }
    }
    cout<<n-sum<<endl;
}
return 0;
}