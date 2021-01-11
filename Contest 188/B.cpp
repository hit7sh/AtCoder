// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";


using namespace std;

using ll = long long;
using vi = vector<int>;



template<typename... T> void print(T... args) { ((cout << args << " "), ...); cout << endl; }

template<typename T> istream& operator>>(istream& in, vector<T> &a) { for (auto&x:a)in>>x; return in; }
template<typename T> ostream& operator<<(ostream& out, vector<T> a) { for (auto&x:a)out << x << ' '; return out; }








void solve() {
	int n, m, x, i, j;
	cin >> n;
	vi A(n), B(n);
	cin >> A >> B;
	ll r=0;
	f0(i, n)
		r += A[i]*B[i];
	print(r==0?"Yes":"No");
}















signed main() {
		
    __speed() solve();
    return 0;
}
