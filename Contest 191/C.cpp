void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> S(n);
	cin >> S;
	
 
	int i, j, ans = 0;
	
	f0(i, n-1)
		f0(j, m-1)
			ans += !!(S[i][j] ^ S[i][j+1] ^ S[i+1][j] ^ S[i+1][j+1]);
 
	print(ans);
}
 
