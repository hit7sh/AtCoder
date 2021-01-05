// Author :: <Hitesh_Saini>
#include<bits/stdc++.h>
using namespace std;

signed main(){
  int a, b, s1=0, s2=0;
	cin >> a >> b;
	do s1+=a%10;while(a/=10);
	do s2+=b%10;while(b/=10);
	print(max(s1,s2));
    return 0;
}
