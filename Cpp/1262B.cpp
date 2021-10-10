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

int n, arr[N], t, vis[N];
set<int> s;

int main(){
    scanf("%d", &t);
    
    while(t--){
        bool isno = false;
        scanf("%d", &n);
        for(int i=1; i<=n; i++){
            scanf("%d", &arr[i]);
            if(arr[i] < i)
                isno = true;
            vis[i] = 0;
        }
        
        if(isno)    { puts("-1"); continue; }
        
        int cc = 1;
        for(int i=1; i<=n; i++){
            if(arr[i] != arr[i-1])
                printf("%d ", arr[i]), vis[arr[i]] = 1;
            else{
                while(vis[cc])  cc++;
                printf("%d ", cc); vis[cc] = 1;
            }
        }
        puts("");
    }

	return 0;
}

