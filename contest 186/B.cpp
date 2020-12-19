// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < int(n); i++)
#define f1(i, n) for(i = 1; i<= int(n); i++)
#define all(x) x.begin(), x.end()
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define endl "\n"


using namespace std;
using mii = map<int, int>;
using ll = long long;


template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

void solve(){
	int n, m, i, j, mn=INT_MAX, mx=INT_MIN;
	cin >> n >> m;
	int A[n][m], x;
	f0(i, n)
	f0(j, m)
		cin >> A[i][j], x=A[i][j],mn=min(mn, x);
	ll ans=0;
	f0(i, n)
		f0(j, m)
			ans += A[i][j]-mn;
	print(ans);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    __speed();
    solve();
    return 0;
}
