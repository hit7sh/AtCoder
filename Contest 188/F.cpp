// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);


#define cmax(x, y) x = max(x, y)
#define cmin(x, y) x = min(x, y)




using namespace std;

using ll = long long;



template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }



ll x, y;
map<ll, ll> mem;

ll f(ll v) {
	if (mem.count(v))
		return mem[v];
	mem[v] = 1e18;
	ll& ans = mem[v];
	cmin(ans, abs(v - x));

	if (v == 1)
		return ans;
	if (v&1)
		cmin(ans, 1 + min(f(v+1), f(v-1)));
	else
		cmin(ans, 1 + f(v/2));
	return ans;
}


void solve() {
	cin >> x >> y;
	print(f(y));
}















int main() {

    __speed() solve();

    return 0;
}
