// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "--- " << #x << " = " << x << " ---\n";
#define findmax(v) *max_element(v.begin(), v.end())
#define _sum(a) accumulate(a.begin(), a.end(), 0)
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)
#define f1(i, n) for(i = 1; i<= (int)(n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define endl "\n"

using namespace std;
using mii = map<int, int>;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int mod = 1e9+7,mxN = 2e6+5;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

int ft[300005], n, A[300005];
void upd(int i, int v){
	for(;i<=n; i+=i&-i)
		ft[i] ^= v;
}
void build(){
	for(int i=1;i<=n;i++)
		upd(i, A[i]);
}
int get(int r){
	int res=0;
	for(; r>0; r -= r&-r)
		res ^= ft[r];
	return res;
}

void solve(){//G
	int  q, i, j, t, x, y;
	cin >> n >> q;
	f1(i, n) cin >> A[i];
	build();
	while(q--){
		cin >> t >> x >> y;
		
		if(t==1){
			upd(x, y);
		}else{
			print(get(y) ^ get(x-1));
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif
    __speed() solve();
    return 0;
}
