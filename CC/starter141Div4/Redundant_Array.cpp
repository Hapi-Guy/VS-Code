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
//     int n;
//     cin>>n;
//     vector<int> v(n),v1(n,0);
//     for(auto &a:v){
//         cin>>a;
//         v1[a]++;
//     }
//     for(auto a:v){
//         cout<<a<<sp;
//     }cout<<endl;
//     for(auto a:v1){
//         cout<<a<<sp;
//     }cout<<endl;
// }
// return 0;
// }
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
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         unordered_map<int, int> f;
//         for(int i = 0; i < n; ++i) {
//             cin >> v[i];
//             f[v[i]]++;
//         }

//         int mxf = 0;
//         for(auto &a : f) {
//             mxf = max(mxf, a.second);
//         }
//         cout << n - mxf << endl;
//     }
//     return 0;
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
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> f;
        for(int &a : v) {
            cin >> a;
            f[a]++;
        }

        int min_cost = 3e5;
        for (auto &a : f) {
            int x = a.first;
            int cost = 0;
            int i = 0;
            while (i < n) {
                if (v[i] == x) {
                    i++;
                } else {
                    int L = i;
                    bool flg=true;
                    while (flg) {
                        if(!(i < n && [i]!=x)){
                            flg=false;
                        }
                        i++;
                    }
                    int R = i - 1;
                    cost += (R - L + 1) * x;
                }
            }
            min_cost = min(min_cost, cost);
        }

        cout << min(n, min_cost) << endl;
    }
    return 0;
}
