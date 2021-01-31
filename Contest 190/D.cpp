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


ll smp(ll n) {
	ll pw = 0, pd = 1;
	while (n % 2 == 0)  
    {  
        n = n/2;  
    }

    for (ll i = 3; i*i <= (n); i = i + 2)  
    {  
        pw = 0;
        while (n % i == 0)  
        {  
            pw++;
            n = n/i;  
        } 
        pd *= pw+1;
    }  
  
    
    if (n > 2 && n&1)  
        pd *= 2;
    return pd;
}



void solve() {
	ll n;
	cin >> n;
	print(smp(n)*2);
	
	
}









int main() {
	

    __speed() solve();

    return 0;
}
