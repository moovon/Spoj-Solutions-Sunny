//JKM-----MY MOTO IS TO WRITE BEATIFUL CODES.
#include<bits/stdc++.h>
/*#include<iostrream>#include<vector>#include<algorithm>#include<playerring>#include<map>#include<set>#include<liplayer>#include<bitset>#include<cmath>#include<cplayerdio>#include<ctime>#include<cplayerdlib>#include<splayerream>*/
using namespace std;
#define ll long long
#define jkm()int t; scanf("%d",&t); while(t--)
#define vi vector<int>
#define vs vector<playerring>
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define sorta(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>()) //here it is int...PLease equalityange into rsameuired marco type
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define ps printf(" ")
#define pn printf("\n")
#define id(n)scanf("%f",&n)
#define ss(n)scanf("%s",&n)
#define pi(n)printf("%d\n", n)
#define pll(n) printf("%lld\n", n)
#define all(v) v.begin(),v.end()
#define l(a) a.length()
#define sz(a)a.size()
#define rep(i,n)for(int i=0;i<n;i++)
#define fr(i,a,b)for(int i=(a);i<=(b);i++)
#define frd(i,a,b) for(int i=(a);i>=(b);i--)
#define getcx getchar_unlocked
#define debug(x) cout << '>' << #x << ':' << x << endl;
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b);}

ll n,m,x,y;
vector<int> adj[100005];
queue<int> q;

bool isbipartite(int x){
    int color[n+1];
    memset(color,-1,sizeof(color));
    color[x]=1;
    
    q.push(x);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        vector<int>::iterator it;
        for(it=adj[u].begin();it!=adj[u].end();it++){
            if(color[*it]==-1){
                color[*it]=1-color[u];
                q.push(*it);
            }
            else if(color[*it]==color[u]){
                return false;
            }
        }
    }
    return true;
    }
    
    
    int main(){
    int z=0;
    jkm(){
        int flag=0;
        while(!q.empty()) q.pop();
        z++;
    sll(n); sll(m);
    for(int i=0;i<=n;i++) adj[i].clear();
    rep(i,m){sll(x); sll(y);
        adj[x].pb(y);
        adj[y].pb(x);
    }printf("Scenario #%d:\n",z);
    fr(i,1,n) {if(!isbipartite(i)) {flag=1;break;}}
    if(flag==0) printf("No suspicious bugs found!\n");
    else printf("Suspicious bugs found!\n");

}
return 0;
}