// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define Yes(x) print((x) ? "Yes" : "No")


using namespace std;


template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }



void solve() {
	int i, j, n, s, d, x, y, ok = 0;
	cin >> n >> s >> d;

	while (n--) {
		cin >> x >> y;
		if (y <= d or x >= s);
		else
			ok = 1;
	}
	Yes(ok);
}






int main() {	
	
    __speed() solve();

    return 0;
}
