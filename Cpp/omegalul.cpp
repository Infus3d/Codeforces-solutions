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
 
const int N = 2e5+7;
const int M = 600;
const int MOD = 998244353;
const int K = 1e3+7;
 
template<class T> bool umin(T& a, T b) { if(a > b){ a = b; return 1; } return 0;}
template<class T> bool umax(T& a, T b) { if(a < b){ a = b;return 1;}return 0;}
template<class T> bool umod(T& a) { while(a < 0) a += MOD; a %= MOD; return 1;}
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
//	freopen("file.in" , "r" , stdin);
//	freopen("file.out" , "w" , stdout);

int a, b, c, A[N];
int n, m, q, ans;

int main(){
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        A[min(a, b)]++;
    }

    for(int i=1; i<=n; i++)
        ans += (A[i] == 0) ? 1 : 0;
    
    scanf("%d", &q);
    while(q--){
        scanf("%d", &c);
        if(c == 3)
            printf("%d\n", ans);
        else{
            scanf("%d %d", &a, &b);

            if(c == 1){
                c = min(a, b);
                A[c]++;
                if(A[c] == 1)
                    ans--;
            }
            else{
                c = min(a, b);
                A[c]--;
                if(A[c] == 0)
                    ans++;
            }
        }
    }

    return 0;
}