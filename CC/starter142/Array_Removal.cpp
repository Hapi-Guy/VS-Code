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
    int m=n;
    vector<int> v(n);
    for(auto &a:v){
        cin>>a;
    }
}
return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int findMinRemovals(int targetValue, vector<int>& elements) {
//     int currentXor = 0, count = 0;
//     for (auto& element : elements) {
//         if (element > targetValue) continue;
//         currentXor |= element;
//         count++;
//     }
    
//     return (currentXor == targetValue ? elements.size() - count : elements.size());
// }

// signed main() {
//     int testCases;
//     cin >> testCases;
    
//     while (testCases--) {
//         int numElements;
//         cin >> numElements;
//         vector<int> elements(numElements);
//         for (auto& element : elements) cin >> element;
        
//         int minRemovals = numElements;
//         for (int i = 0; i < 32; i++) {
//             int targetValue = (1 << i) - 1;
//             minRemovals = min(minRemovals, findMinRemovals(targetValue, elements));
//         }
        
//         cout << minRemovals << endl;
//     }
    
//     return 0;
// }