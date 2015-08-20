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
ll n,m;
typedef pair<int, int> PII;
char pixel[200][200];
int ans[200][200];
queue<PII> q;

void bfs(PII start){
    PII v;
  
    q.push(start);
    while(!q.empty()){
        v=q.front();
        q.pop();
        for(int a=v.first-1;a<=v.first+1;a++){
            for(int b=v.second-1;b<=v.second+1;b++){
                if((a>=0&&a<n)&&(b<m&&b>=0)){
                    int x=abs(a-start.first)+abs(b-start.second);
                    if(ans[a][b]>x){
                        ans[a][b]=x;
                        q.push(make_pair(a,b));
                    }
                }
            }
        }
    }
}


int main(){
    jkm(){
        sll(n); sll(m);
        rep(i,n) {scanf("%s",pixel[i]);}
        rep(i,n) rep(j,m) {if(pixel[i][j]=='1') ans[i][j]=0; else ans[i][j]=INT_MAX;}
        rep(i,n) {rep(j,m) {if(pixel[i][j]=='1') {bfs(mp(i,j));}}}
        rep(i,n){ rep(j,m) printf("%d ",ans[i][j]); printf("\n");}
        
    }
    return 0;
}