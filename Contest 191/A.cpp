void solve() {
	int i, j;
	int v, t, s, d;
	cin >> v >> t >> s >> d;
	t *= v;
	s *= v;
	
	Yes(d<t or d>s);
}
