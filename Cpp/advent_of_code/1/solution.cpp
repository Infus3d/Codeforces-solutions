#include "bits/stdc++.h"

#define ff first
#define ss second
#define pb push_back
#define ll long long
#define db puts("*****")
#define sz(x) int(x.size())
#define pii pair <int , int>
#define mid(x , y) ((x+y)>>1)
#define all(x)	x.begin(),x.end()
#define y1 your_name_engraved_herein

using namespace std;

const int N = 2e5+2;
const int K = 1e3+2;
const int MOD = 998244353;

template<class T> bool umin(T& a, T b) { if(a > b){ a = b; return 1; } return 0;}
template<class T> bool umax(T& a, T b) { if(a < b){ a = b;return 1;}return 0;}

void solve(){
  freopen("input.txt", "r", stdin);
  vector<int> v;
  int n, a, b, ans = 0;
  while(cin >> n) v.pb(n);
  
  b = v[0] + v[1] + v[2];
  for(int i=3; i<sz(v); i++){
    a = v[i] + v[i-1] + v[i-2];
    if(a > b) ans++;
    b = a;
  }
  printf("%d\n", ans);
}

int main(){
  int testcase = 1;
  //~ scanf("%d", &testcase);
  while(testcase--){
    solve();
  }
  return 0;
}
