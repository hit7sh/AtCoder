// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n"

#define Yes(x) print((x) ? "Yes" : "No")
#define tt 	int t; for (cin >> t; t--; )

#define f0(i, n)  for (i = 0; i < (int)(n); i++)
#define f1(i, n)  for (i = 1; i <=(int)(n); i++)

#define cmax(x, y) x = max(x, y)
#define cmin(x, y) x = min(x, y)

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x.size())



using namespace std;

using ll = long long;



template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }

template <typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.F >> p.S; return in; }
template <typename T1, typename T2> ostream& operator<<(ostream& ot, pair<T1, T2>& p) { ot << p.F << ' ' << p.S; return ot; }

template <typename T> istream& operator>>(istream& in, vector<T>& v) { for (T& x:v) in >> x; return in; }
template <typename T> ostream& operator<<(ostream& ot, vector<T>& v) { for (T& x:v) ot << x << ' '; return ot; }





void solve() {
	long double n, x;int c = 0, ok = 0;
	cin >> n >> x;
	vector<pair<ll, ll>> A(n);
	cin >> A;
	long double amt = 0;
	for (auto& [v, p]:A) {
		++c;
		amt += (v*p)/100.0;
		long double someSmallNumber = 0.001, a = amt, b = x;

if ((a -b ) < someSmallNumber);

else if ((a -b ) < 0) {
;

}

else {

ok = 1;
break;

}
	}
  
	if (ok)
		print(c);
	else
		print(-1);

}









int main() {

    __speed() solve();

    return 0;
}
