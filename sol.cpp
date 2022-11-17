   /* donghuyhoang */
#include<bits/stdc++.h>
using namespace std;
#define fi first                        
#define se second
#define in insert
#define pb push_back
#define endl '\n'
#define L(s) (int)s.length()
#define FOR(i,x,n) for(int i = x ; i <= (int)n ; i++)
#define FORR(i,x,n) for(int i = x ; i >= (int)n ; i--)
#define ms(a,x) memset(a,x,sizeof a)
typedef long long ll;
typedef unsigned long long ull;
using P = pair<int,int>;
const int MOD = (int) 1e9+7;
inline ll gcd(ll a,ll b){if(b<=0) return a; return gcd(b,a%b);}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
const int inf = 2e9;
const int uinf = INT_MIN;
const long long INF = 9e18;
const long long UINF = LLONG_MIN;

int main(){                           
//    freopen("input.txt","r",stdin);                                               
//    freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  int n,k; cin >> n >> k;
  vector<ll> a(n);
//  vector<int> b(10000001,0); // luu index nho nhat cua 1 so
  unordered_map<ll,int> b;
//  vector<int> d(10000001,0); // luu index lon nhat cua 1 so
  unordered_map<ll,int> d;
//  vector<int> c(10000001); 
  unordered_map<ll,int> c;
  for (int i = 0; i < n; i++){
    cin >> a[i];
    c[a[i]] = 1;
    if(!b[a[i]]) b[a[i]] = i + 1;
    d[a[i]] = i + 1;
  }
  int res = 1;
  for (int i = 0; i < n; i++){
    int x = a[i] - k;
    if(x > 0 && c[x] && b[x] < d[a[i]]){
      c[a[i]] = max(c[a[i]],c[x] + 1);
      res = max(res,c[a[i]]);
    }
  }
  cout << res;
  cerr << "\nTime: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
  return 0;
}  