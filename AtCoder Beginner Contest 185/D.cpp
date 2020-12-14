// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)
#define endl "\n"

using namespace std;
using ll = long long;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

ll M[mxN];
vl d;
void solve(){//G
	ll n, m, i, ans=0;
	cin >> n >> m;
	f1(i, m)
		cin >> M[i];
	M[m+1] = n+1;
	sort(M+1, M+m+1);
	ll mind=INT_MAX;
	for(i=1;i<=m+1;i++)
		if(M[i]-M[i-1]!=1)
			mind = min(mind, M[i]-M[i-1]-1), d.EB(M[i]-M[i-1]-1);

	for(ll x:d)
		ans += (x/mind) +(x%mind!=0);
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
