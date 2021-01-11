// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define tt int t; for (cin>>t; t--; )

#define f0(i, n)  for (i = 0; i < (int)(n); i++)
#define f1(i, n)  for (i = 1; i<= (int)(n); i++)

#define cmax(x, y) x = max(x, y);
#define cmin(x, y) x = min(x, y);

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x.size())

#define EB emplace_back
#define PB push_back

#define endl "\n"
#define S second
#define F first


using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;

using ll = long long;
using vi = vector<int>;

using vvi = vector<vi>;
using vl = vector<ll>;

const int mod = 1e9+7, mxN = 2e5+5;



template<typename... T> void print(T... args) { ((cout << args << " "), ...); cout << endl; }

template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1,T2> &a) { in>>a.F>>a.S; return in; }
template<typename T1, typename T2> ostream& operator<<(ostream& out, pair<T1,T2> a) { out<<a.F<<" "<<a.S; return out; }

template<typename T> istream& operator>>(istream& in, vector<T> &a) { for (auto&x:a)in>>x; return in; }
template<typename T> ostream& operator<<(ostream& out, vector<T> a) { for (auto&x:a)out << x << ' '; return out; }




vi C(mxN, INT_MAX);
vi adj[mxN];


void solve() {
	int n, m, i, u, v;
	cin >> n >> m;	
	vi A(n);
	cin >> A;
	vector<pii> B(n);
	f0(i, n)
		B[i].F = A[i], B[i].S = i;
	sort(all(B));
	f0(i, m) {
		cin >> u >> v;
		--u, --v;
		adj[u].EB(v);
	}

	vi vis(n);
	f0(i, n) {
		queue<int> q;
		q.push(B[i].S);
		while(sz(q)) {
			int cr = q.front();
			vis[cr] = 1;
			q.pop();
			if (cr^B[i].S)
				cmin(C[cr], A[B[i].S]);
			for (int x: adj[cr])
				if (!vis[x])
					q.push(x);
		}
		vis[B[i].S] = 0;
	}

	int ans = INT_MIN;
	f0(i, n)
		if(C[i]!=INT_MAX)
			cmax(ans, A[i]-C[i]);
	
	print(ans);
}















signed main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
    __speed() solve();
    return 0;
}
