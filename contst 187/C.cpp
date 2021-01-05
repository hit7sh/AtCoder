// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>

#define __speed() ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define dbg(x) cout << "[" << __LINE__ << ": "<< #x << " = " << x << " ]\n";


using namespace std;


template<typename... Args>void print(Args... args){((cout << args << " "), ...); cout << endl;}
template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.F>>a.S;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.F<<" "<<a.S;return out;}
template<typename T>istream& operator>>(istream& in,vector<T> &a){for(auto&x:a)in>>x;return in;}
template<typename T>ostream& operator<<(ostream& out,vector<T> a){for(auto&x:a)out << x << ' ';return out;}

void solve(){
	int n;
	cin >> n;
	vector<string> ss(n);
	for(string& s:ss)
		cin >> s;
	map<string, int> mp;
	for (string& s:ss) {
		mp[s]=1;
	}
	for (string& s:ss) {
		string t, s1=s;
		t=s1[0]=='!'?s1.substr(1):"!"+s1;
		if(mp.count(s)&&mp.count(t)) {
			print(s[0]=='!'?s.substr(1):s);
			return;
		}
	}
	print("satisfiable");

}

signed main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

    __speed() solve();
    return 0;
}
