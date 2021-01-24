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

#define EB emplace_back
#define PB push_back

#define endl "\n"
#define S second
#define F first



using namespace std;
using mii = map<int, int>;
using pii = pair<int, int>;

using ll = long long;
using vi = vector<int>;

using vvi = vector<vi>;
using vl = vector<ll>;

const int mod = 1e9+7, mxN = 2e5+5, INF = 0x3f3f3f3f;



template <typename... T> void print(T... args) { ((cout << args << " "), ...), cout << endl; }

template <typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& p) { in >> p.F >> p.S; return in; }
template <typename T1, typename T2> ostream& operator<<(ostream& ot, pair<T1, T2>& p) { ot << p.F << ' ' << p.S; return ot; }

template <typename T> istream& operator>>(istream& in, vector<T>& v) { for (T& x:v) in >> x; return in; }
template <typename T> ostream& operator<<(ostream& ot, vector<T>& v) { for (T& x:v) ot << x << ' '; return ot; }



vector<vector<long long>> mul(vector<vector<long long>>& A, vector<vector<long long>>& B) {
	int i, j, k;
	vector<vector<long long>> res(3, vector<long long>(3));
	f0(i, 3)
		f0(j, 3)
			f0(k, 3)
				res[i][j] += A[i][k]*B[k][j];
	return res;
}


void solve() {
	int i, j, k;
	vector<vl> now = {{1, 0, 0},
					  {0, 1, 0},
					  {0, 0, 1}};

	vector<vl> clockwise = {{0, 1, 0}, 
						    {-1, 0, 0}, 
						    {0, 0, 1}};

  vector<vl> anticlockwise = {{0, -1, 0}, 
  							  {1, 0, 0}, 
  							  {0, 0, 1}};

  vector<vl> reflectx = {{-1, 0, 2}, 
  						 {0, 1, 0}, 
  						 {0, 0, 1}};

  vector<vl> reflecty = {{1, 0, 0}, 
  						 {0, -1, 2}, 
  						 {0, 0, 1}};

  	vector<vector<vector<long long>>> ops;
  	ops.EB(now);

  	int n, m;
  	cin >> n;
  	vector<pair<int, int>> points(n);
  	cin >> points;

  	cin >> m;
    
  	while (m--) {
  		ll op, p;
  		cin >> op;

  		switch (op) {
  			case 1:
  					now = mul(clockwise, now);
  			break;
        
  			case 2:
  					now = mul(anticlockwise, now);
  			break;
        
  			case 3:
  					cin >> p;
  					reflectx[0][2] = 2*p;
  					now = mul(reflectx, now);
  			break;
        
  			case 4:
  					cin >> p;
  					reflecty[1][2] = 2*p;
  					now = mul(reflecty, now);
  			break;
  		}
      
  		ops.EB(now);
  	}

  	int q;
  	cin >> q;
  	
  	while (q--) {
  		int a, b;
  		cin >> a >> b;
  		--b;
  		vector<long long> pt = {points[b].F, points[b].S, 1};
  		ll x = 0, y = 0;

  		f0(i, 3)
  			x += ops[a][0][i] * pt[i], y += ops[a][1][i] * pt[i];

  		print(x, y);
  	}
}









int main() {
    __speed() solve();

    return 0;
}
