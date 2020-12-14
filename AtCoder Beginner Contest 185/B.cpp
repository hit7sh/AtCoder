// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


using namespace std;

void solve(){//G
	int n, m, t,og, ct=0;
	cin >> n >> m >> t;
	og=n;
	int a, b;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		int dec = a-ct, inc;
		ct =b;
		n = max(0, n-dec);
		if(n<=0){
			cout << "No";
			return;
		}
		inc = b-a;
		n = min(og, n+inc);
	}
	if(n-(t-b)<=0)
		cout << "No";
	else
		cout << "Yes";
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
