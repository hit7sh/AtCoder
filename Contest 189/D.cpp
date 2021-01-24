// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);

#define f0(i, n)  for (i = 0; i < (int)(n); i++)
#define f1(i, n)  for (i = 1; i <=(int)(n); i++)




using namespace std;
using ll = long long;



template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }




void solve() {
	int n, i;
	cin >> n;
	ll ct = 1, cf = 1, ans;
	string s;
	f1(i, n) {
		cin >> s;
		if (s == "OR") {
			ct = 2*ct + cf;
		} else {
			cf = 2*cf + ct;
		}
	}
	print(ct);
}









int main() {

    __speed() solve();

    return 0;
}
