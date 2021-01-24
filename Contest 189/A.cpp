// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>


using namespace std;

template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }




void solve() {
	string s;
	cin >> s;
	if(string(3, s[0]) == s)
		print("Won");
	else
		print("Lost");	
}









int main() {
	
    solve();

    return 0;
}
