// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < int(n); i++)
#define f1(i, n) for(i = 1; i<= int(n); i++)
#define all(x) x.begin(), x.end()
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define endl "\n"


using namespace std;


template<typename... Args>void print(Args... args){((cout << args << " "), ...);cout << endl;}

void solve(){//c
	int n, m, i;
	cin >> n;
	int ans=0;
	f1(i, n){
		int x=i, ok=1;
		do if(x%10==7)ok=0; while(x/=10);
		x=i;
		do if(x%8==7)ok=0; while(x/=8);

		ans+=ok;
	}
	print(ans);
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    __speed();
    solve();
    return 0;
}
