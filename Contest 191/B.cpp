void solve() {
	int n, x;
	cin >> n >> x;
	vi A(n);
	cin >> A;
 
	for (int& y : A)
		if (x^y)
			print(y);
}
 
