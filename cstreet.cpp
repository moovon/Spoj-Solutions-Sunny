//JKM-----MY MOTO IS TO WRITE BEATIFUL CODES.
#include<bits/stdc++.h>
/*#include<iostrream>#include<vector>#include<algorithm>#include<playerring>#include<map>#include<set>#include<liplayer>#include<bitset>#include<cmath>#include<cplayerdio>#include<ctime>#include<cplayerdlib>#include<splayerream>*/
using namespace std;
#define ll long long
#define jkm()int t; scanf("%d",&t); while(t--)
#define vi vector<int>
#define vs vector<playerring>
#define mp(a,b)make_pair(a,b)
#define pb(a)push_back(a)
#define sorta(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.begin(), v.end(), greater<int>()) //here it is int...PLease equalityange into rsameuired marco type
#define si(n)scanf("%d",&n)
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


vector< pair<ll,pair< ll,ll > > > p,MST; //MST HOLDS THE MST ONLY :)
ll look[100005];
ll n,m;
void initialize(ll n){
p.clear();
MST.clear();
	fr(i,0,n) look[i]=i;
}

ll find(ll x){
 if(x!=look[x])
 look[x]=find(look[x]);
 return look[x];
}

ll kruskal(vector< pair<ll,pair< ll,ll > > > p){
ll x, y;
ll cost, mincost=0;
 for(ll i = 0;i < m;++i)
 {
x = find(p[i].second.first);
y = find(p[i].second.second);
cost = p[i].first;
if(x!=y)//CHECKING FOR CYCLES
{MST.push_back(p[i]);
    mincost += cost;
    look[x]=look[y];
}    
}
return mincost;
}


int main(){
	jkm(){
ll money; sll(money);sll(n); sll(m); //INPUT : VERTICES AND EDGES
initialize(n);
ll x,y,cost,weight,mincost;
for(int i=0;i<m;i++){
sll(x); sll(y); sll(weight);
p.push_back(pair<int,pair< ll,ll > >(weight,make_pair(x,y)));
}
sort(all(p));
mincost=kruskal(p);
pll(mincost*money);
p.erase(all(p));
}
return 0;
}


