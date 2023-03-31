#include<bits/stdc++.h>

using namespace std;

/***template***/ 
/// 
#define ll                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define LOP(i,a,b)           for(ll i=a;i<b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 100004
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define mstt(a,b)            memset((a),(b),sizeof (a))

vector<ll>graph[100004];
ll node,edge,col[MAXN],vis[MAXN],n,u,v;
bool f;


bool bfs(ll ma_src)
{
   deque<ll>q;
   vis[ma_src]=1;
    q.pb(ma_src);
    while(!q.empty())
    {
        ll src=q.front();
        q.pop_front();
        LOOP(i,graph[src].size())
        {
            ll adj=graph[src][i];
            if(vis[adj]==0)
            {
                vis[adj]=1;
                q.pb(adj);
            }
           
        }
    }
    return 0;
}
