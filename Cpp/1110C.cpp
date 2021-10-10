/*
ID : omarmuh1
PROG : test
LANG : C++11
*/

#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"

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
#define sz(x) int(x.size())
#define tr(it , c) for(__typeof(c.begin()) it = (c.begin()); it != (c.end()); it++)
#define y1 you_made_my_day

using namespace std;
using namespace __gnu_pbds;

const int N = 2e5+7;
const int MOD = 1e9+7;

template<class T> bool umin(T& a, T b) { if(a > b){ a = b;return 1;}return 0;}
template<class T> bool umax(T& a, T b) { if(a < b){ a = b;return 1;}return 0;}
template<class T> bool umod(T& a, T b) { a += b; while(a < 0) a += MOD; a %= MOD; return 1;}
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> omar;

//	freopen("file.in" , "r" , stdin);
//	freopen("file.out" , "w" , stdout);

int n;
ll a, b[30];

int main(){
    for(int i=1; i<=26; i++){
        ll k = (1LL<<i)-1;
        
        for(int j=2; j*j<=k; j++)
            if(k%j==0){
                b[i] = k/j;
                break;
            }
    }
    
    scanf("%d", &n);
    while(n--){
        scanf("%lld", &a);
        ll c = 1;
        int deg = 1;
        for(int i=1; (1LL<<i)<=a; i++)
            deg = i+1;
        c = (1LL<<deg)-1;
        if(c == a)
            printf("%lld\n", b[deg] ? b[deg] : 1LL);
        else
            printf("%lld\n", c);
    }
    
	return 0;
}

