// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);

#define f0(i, n)  for (i = 0; i < (int)(n); i++)
#define f1(i, n)  for (i = 1; i <=(int)(n); i++)

#define cmax(x, y) x = max(x, y)
#define cmin(x, y) x = min(x, y)



#define endl "\n"
#define S second
#define F first



using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;

using ll = long long;
using vi = vector<int>;


template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }

template <typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.F >> p.S; return in; }
template <typename T> istream& operator>>(istream& in, vector<T>& v) { for (T& x:v) in >> x; return in; }





void solve() {
	int i, j, k, n, m, s, d, x, y, ans = 0;
	cin >> n >> m;
	vector<pii> C(m);
	cin >> C;

	
	cin >> k;
	vector<pii> K(k);
	cin >> K;


	f0(i, 1<<k) {
		vi vis(n+1);
		f0(j, k)
			if ((1<<j)&i)
				vis[K[j].F] = 1;
			else
				vis[K[j].S] = 1;
		int c = 0;

		for (auto& [x, y] : C)
			c += vis[x] && vis[y];
		cmax(ans, c);
	}

	print(ans);
}






int main() {	
	
    __speed() solve();

    return 0;
}
