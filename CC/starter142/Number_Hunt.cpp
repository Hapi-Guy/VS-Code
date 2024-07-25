// // #include<bits/stdc++.h>
// // using namespace std;
// // #define int long long
// // #define double long double
// // #define endl '\n'
// // #define no cout<<"NO\n"
// // #define yes cout<<"YES\n"
// // #define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// // #define sp " "

// // inline bool cp(int n) {
// //   if (n == 1) return false;
// //   for (int i = 2; i < n; i++) {
// //     if (n % i == 0) {
// //       return false;
// //     }
// //   }
// //   return true;
// // }
// // int fprm(int n) {
// //     int a = n;
// //     while (!cp(a)) {
// //         a++;
// //     }
// //     return a;
// // }

// // int32_t main(){
// //     FastAF
// // int t;
// // cin>>t;
// // while(t--)
// // {
// //     int n;
// //     cin>>n;
// //     int pr=fprm(n);
// //     int pr1=fprm(pr+1);
// //     int ans=pr*pr1;
// //     cout<<ans<<endl;
// // }
// // return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // bool isPrime(int n) {
// //     if (n <= 1) return false;
// //     if (n <= 3) return true;
// //     if (n % 2 == 0 || n % 3 == 0) return false;
// //     for (int i = 5; i * i <= n; i += 6) {
// //         if (n % i == 0 || n % (i + 2) == 0) return false;
// //     }
// //     return true;
// // }

// // long long findProductOfPrimes(int X) {
// //     // Find the first a >= X
// //     int prime1 = X;
// //     while (!isPrime(prime1)) {
// //         prime1++;
// //     }

// //     // Find the next a >= prime1
// //     int prime2 = prime1 + 1;
// //     while (!isPrime(prime2)) {
// //         prime2++;
// //     }

// //     // Return the product of these two primes
// //     return static_cast<long long>(prime1) * prime2;
// // }

// // int main() {
// //     int T;
// //     cin >> T;
    
// //     while (T--) {
// //         int X;
// //         cin >> X;
// //         cout << findProductOfPrimes(X) << endl;
// //     }
    
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define double long double
// #define endl '\n'
// #define no cout<<"NO\n"
// #define yes cout<<"YES\n"
// #define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define sp " "

// inline bool cp(int n) {
//   if (n == 1) return false;
//   for (int i = 2; i < n; i++) {
//     if (n % i == 0) {
//       return false;
//     }
//   }
//   return true;
// }

// int32_t main(){
//     FastAF
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         int pr = n;
//         while (!cp(pr)) {
//             pr++;
//         }
//         int pr1 = pr + 1;
//         while (!cp(pr1)) {
//             pr1++;
//         }
//         int ans = pr * pr1;
//         cout << ans << endl;
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

inline bool cp(int n) {
  if (n < 2) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int32_t main(){
    FastAF
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int pr = n;
        while (!cp(pr)) {
            pr++;
        }
        int pr1 = pr + 1;
        while (!cp(pr1)) {
            pr1++;
        }
        int ans = pr * pr1;
        cout << ans << endl;
    }
    return 0;
}
