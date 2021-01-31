// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);

using namespace std;


template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }






void solve() {
	int i, j, n, k;
	int a, b, c, ok;
	cin >> a >> b >> c;
	while (1) {
		if (c==0) {
			if (a==0) {
				ok = 1;
				break;
			}
			a--;
			if (b==0) {
				ok = 0;
				break;
			}
			b--;
		} else {
			if (b==0) {
				ok = 0;
				break;
			}
			b--;
			if (a==0) {
				ok = 1;
				break;
			}
			a--;
		}
	}
	print(ok?"Aoki":"Takahashi");
}






int main() {

    __speed() solve();

    return 0;
}
