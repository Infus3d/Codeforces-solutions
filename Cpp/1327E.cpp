#include "bits/stdc++.h"
// #include "ext/pb_ds/assoc_container.hpp"
 
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define db puts("*****")
#define mid(x , y) ((x+y)>>1)
#define ff first
#define ss second
#define all(x)	x.begin(),x.end()
#define ll long long
#define sqr(x)	((x)*(x))
#define pii pair <int , int>
#define pll pair <ll, ll>
#define sz(x) int(x.size())
#define tr(it , c) for(__typeof(c.begin()) it = (c.begin()); it != (c.end()); it++)
#define y1 you_made_my_day
 
using namespace std;
// using namespace __gnu_pbds;
 
const int N = 2e5+2;
const int M = 600;
const int MOD = 998244353;
const int K = 1e3+2;
 
template<class T> bool umin(T& a, T b) { if(a > b){ a = b; return 1; } return 0;}
template<class T> bool umax(T& a, T b) { if(a < b){ a = b;return 1;}return 0;}
template<class T> bool umod(T& a) { while(a < 0) a += MOD; a %= MOD; return 1;}
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
//	freopen("file.in" , "r" , stdin);
//	freopen("file.out" , "w" , stdout);

int n;
int f[N], d[N];

int mul(int x, int y){
  return (1LL * x * y) % MOD;
}

int main(){
  f[0] = d[0] = 10;
  for(int i=1; i<=2e5; i++){
    d[i] = mul(d[i-1], (i < 2) ? 9 : 10);
    f[i] = mul(f[i-1], (i < 3) ? 9 : 10);
  }
  
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    printf("%d ", (mul(f[n-i], max(0, n-i-1)) + mul(d[n-i], min(2, n-i+1))) % MOD);
  }
  puts("");
  
  return 0;
}
