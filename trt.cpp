    //JKM-----MY MOTO IS TO WRITE BEATIFUL CODES.
    #include<bits/stdc++.h>
    /*#include<iostream>#include<vector>#include<algorithm>#include<string>#include<map>#include<set>#include<list>#include<bitset>#include<cmath>#include<cstdio>#include<ctime>#include<cstdlib>#include<sstream>*/
    using namespace std;
    //template jkm
    #define     ll                       long long
    #define     jkm()                    int t; scanf("%d",&t); while(t--)
    #define     vi                       vector<int>
    #define     vs                       vector<string>
    #define     mp(a,b)                  make_pair(a,b)
    #define     pb(a)                    push_back(a)
    #define     sorta(v)                 sort(v.begin(), v.end())
    #define     sortd(v)                 sort(v.begin(), v.end(), greater<int>())     //here it is int...PLease change into required data type
    #define     si(n)                    scanf("%d",&n)
    #define     sll(n)                   scanf("%lld",&n)
    #define     ps                       printf(" ")
    #define     pn                       printf("\n")
    #define     id(n)                    scanf("%f",&n)
    #define     ss(n)                    scanf("%s",&n)
    #define     pi(n)                    printf("%d\n", n)
    #define     pll(n)                   printf("%lld\n", n)
    #define     all(v)                   v.begin(),v.end()
    #define     l(a)                     a.length()
    #define     sz(a)                    a.size()
    #define     rep(i,n)                  for(int i=0;i<n;i++)
    #define     fr(i,a,b)                for(int i=(a);i<=(b);i++)
    #define     frd(i,a,b)               for(int i=(a);i>=(b);i--)
    #define     debug(x)                 cout << '>' << #x << ':' << x << endl;
    template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }      //gcd
    template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b);}              //lcm
    template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));} //bitcount
    template<class T> inline bool isPrimeNumber(T n) {if(n<=1)return false;for (T i=2;i*i<=n;i++) if (n%i==0) return false;return true;}
    template<class T> inline T powerMod(T p,int e,T m) {if(e==0)return 1%m;else if(e%2==0){T t=powerMod(p,e/2,m);return multiplyMod(t,t,m);}else return multiplyMod(powerMod(p,e-1,m),p,m);}
    bool isUpperCase(char c){return c>='A' && c<='Z';}//NOTES:isUpperCase(
    bool isLowerCase(char c){return c>='a' && c<='z';}
    char toLowerCase(char c){return (isUpperCase(c))?(c+32):c;}
    char toUpperCase(char c){return (isLowerCase(c))?(c-32):c;}
    template<class T> string tostring(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}
    int toint(string s){int r=0;istringstream sin(s);sin>>r;return r;}
    double todouble(string s){double r=0;istringstream sin(s);sin>>r;return r;}
    const double pi=acos(-1.0);
    //jkm template
    ll p[100005];
    ll N;
    ll dp[2005][2005];
    int maxtreat(int s, int e){
        if(s>e) return 0;
        if(dp[s][e]!=-1) return dp[s][e];
       int y=N-(e-s+1) + 1;
        return dp[s][e]=max(maxtreat(s+1,e)+y*p[s], maxtreat(s,e-1)+y*p[e]);
    }

    int main(){
    cin>>N;
    rep(i,N) rep(j,N) dp[i][j]=-1;
    rep(i,N) cin>>p[i];
    int x=maxtreat(0,N-1);
    cout<<x<<"\n";
    return 0;
    } 