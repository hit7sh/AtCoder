// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);



using namespace std;

template<typename... T> void print(T... args) { ((cout << args << " "), ...); cout << endl; }






void solve() {
	int n, m, x, i, j;
	cin >> n >> m;
	if (n > m)
		swap(n, m);
	print(n+3>m?"Yes":"No");
}







signed main() {
		
    __speed() solve();
    return 0;
}
