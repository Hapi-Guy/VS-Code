#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define FastAF ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp " "
vector<pair<int, int>> gn(int i, int j, int n, int m) {
vector<pair<int, int>> ne;
if (i > 0) ne.push_back({i - 1, j});
if (i < n - 1) ne.push_back({i + 1, j});
if (j > 0) ne.push_back({i, j - 1});
if (j < m - 1) ne.push_back({i, j + 1});
return ne;
}
vector<vector<int>> sm(int n, int m, vector<vector<int>>& mat) {
while (true) {
bool changed = false;
vector<vector<int>> nm = mat;
for (int i = 0; i < n; ++i) {
for (int j = 0; j < m; ++j) {
int current_value = mat[i][j];
vector<pair<int, int>> ne = gn(i, j, n, m);
int mxnv = INT_MIN;
for (auto& neighbor : ne) {
int ni = neighbor.first;
int nj = neighbor.second;
                    mxnv = max(mxnv, mat[ni][nj]);
}
bool stg = true;
for (auto& neighbor : ne) {
int ni = neighbor.first;
int nj = neighbor.second;
if (mat[i][j] <= mat[ni][nj]) {
stg = false;
break;
}
}
if (stg) {
nm[i][j] = mxnv;
changed = true;
}
}
}
mat = nm;
if (!changed) break;
}
return mat;
}
int32_t main() {
FastAF
int t;
cin >> t;
vector<vector<vector<int>>> results;
for (int k = 0; k < t; ++k) {
int n, m;
cin >> n >> m;
vector<vector<int>> mat(n, vector<int>(m));
for (int i = 0; i < n; ++i) {
for (int j = 0; j < m; ++j) {
cin >> mat[i][j];
}
}
vector<vector<int>> stabilized_matrix = sm(n, m, mat);
results.push_back(stabilized_matrix);
}
for (auto& result : results) {
for (auto& row : result) {
for (int i=0;i<row.size(); ++i) {
if (i>0)cout<<sp;
cout<<row[i];
}
cout<<endl;
}
}
return 0;
}
