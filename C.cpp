    // have a good day !
    /* dong` huy hoang` */

#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "C:\debug\db.cpp"
#else
#define debug(...) ""
#endif
#define fi first
#define se second
#define in insert
#define pb push_back
#define endl '\n'
#define L(s) (int)s.length()
#define ms(a,x) memset(a,x,sizeof a)
typedef long long ll;
typedef unsigned long long ull;
using P = pair<int,int>;
const int MOD =  1e9+7;
inline ll gcd(ll a,ll b){if(b<=0) return a; return gcd(b,a%b);}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
const int inf = 2e9;
const int uinf = INT_MIN;
const long long INF = 9e18;
const long long UINF = LLONG_MIN;
const int N = 1e5 + 5;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin >> n;
  vector<int> f(n + 1,0),a(n + 1);
  for (int i = 0; i < n; i++) cin >> a[i];
  if(n == 1) return cout << a[0],0;
  else if(n == 2) return a[0] + a[1],0;
  else if(n == 3) return cout << max({a[0] + a[1],a[1] + a[2],a[0] + a[2]}),0;
  f[1] = a[0];
  f[2] = a[0] + a[1];
  f[3] = max(f[1] + a[2],f[2]);
  for (int i = 4; i <= n; i++){
    f[i] = max({f[i-1],f[i-2] + a[i-1],f[i-3] + a[i-2] + a[i-1]});
  }
  cout << f[n];
  return 0;
}














 