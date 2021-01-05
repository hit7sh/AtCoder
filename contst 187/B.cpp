// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";
#define tt int t;for(cin>>t; t--; )
#define f0(i, n) for(i = 0; i < (int)(n); i++)


using namespace std;


template<typename... Args>void print(Args... args){((cout << args << " "), ...); cout << endl;}

void solve(){//A
	int n;
	cin >> n;
	vector<array<int, 2>> p(n);
	int i, j, ans=0;
	double s;
	f0(i, n)
		cin >> p[i][0] >> p[i][1];
	
	f0(i, n)
		for(j=i+1;j<n;j++)
			s = (double(abs(p[i][1]-p[j][1]))/(abs(p[i][0]-p[j][0])==0?INT_MAX:abs(p[i][0]-p[j][0]))), ans +=s<=1;
	print(ans);
}

signed main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    __speed() solve();
    return 0;
}
