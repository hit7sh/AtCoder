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
using ll = long long;

template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

long long int dp[778][778]{0};
void generate(){
    int i,j;
    for(i=1;i<=777;i++)
        dp[i][i]=dp[i][0]=1;
        
    for(i=2;i<=777;i++)
        for(j=1;j<i;j++)
            dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
}
void solve(){//G
	ll n;
	cin >> n;
	print(dp[n-1][11]);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout);
	#endif
    __speed();
    generate();
    solve();
    return 0;
}
