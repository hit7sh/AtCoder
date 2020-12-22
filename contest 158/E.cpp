#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n, p, suffix_remainder=0, ten=1, ans=0;
  string s;
  cin >> n >> p >> s;
  vector<int>remainder_count(p);
  remainder_count[0]=1;
  
  if(p==2 ||p==5){
    for(int i=0;i<n;i++)
      ans += (s[i]^48)%p==0?i+1:0;
    cout << ans;
    return 0;
  }
  
  for(int i=n-1;~i;--i){
    	suffix_remainder = (suffix_remainder+(s[i]^48)*ten)%p;
    	ans += remainder_count[suffix_remainder];
    	remainder_count[suffix_remainder]++;
    	ten = ten*10%p;
  }
  cout << ans;
  return 0;
}
