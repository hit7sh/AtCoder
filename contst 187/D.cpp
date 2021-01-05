// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define all(x) x.begin(), x.end()

using namespace std;
using ll = long long;


template<typename... Args>inline void print(Args... args){((cout << args << " "), ...); cout << endl;}


void solve() {//b
	ll n;
	cin >> n;
	vector<pair<ll, ll>> A(n);
	cin >> A;
  
	sort(all(A), [](pair<ll, ll>& a, pair<ll, ll>& b){
		return 2*a.F+a.S > 2*b.F+b.S;
	});

	ll have=0, aoki=0;
	for(auto& [x, y]:A)
		aoki += x;
	
	ll ans=0;
	for (auto& [x, y]:A) {
		if (aoki >= have)
			have += x+y, aoki-=x, ans ++;

	}
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
