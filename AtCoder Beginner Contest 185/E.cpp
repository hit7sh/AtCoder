// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define endl "\n"

using namespace std;
using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod = 1e9+7,mxN = 2e6+5;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

void solve(){//G
	int n, m, i, j;
	cin >> n >> m;
	vi A(n), B(m);
	vector<vi> dp(n+1, vi(m+1));
	for(int& x:A)cin >> x;
	for(int& x:B)cin >> x;
	dp[0][0] = 0;
	f1(i, n)dp[i][0]=i;
	f1(i, m)dp[0][i]=i;
	f1(i, n)
		f1(j, m)
			dp[i][j] = min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+(A[i-1]!=B[j-1])});
	print(dp[n][m]);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif
    __speed() solve();
    return 0;
}
