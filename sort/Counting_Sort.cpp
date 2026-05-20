// have a good day !
/* dong` huy hoang` */

#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define in insert
#define pb push_back
#define endl '\n'
#define ms(a,x) memset(a,x,sizeof a)
#define fillvalue(a,x) fill(a,a + sizeof(a) / sizeof(a[0]),x)
#define FOR(i,x,n) for(int i = x; i <= n; i++)
#define FORR(i,x,n) for(int i = x; i >= n; i--)
typedef long long ll;
typedef unsigned long long ull;
inline ll gcd(ll a,ll b){if(b<=0) return a; return gcd(b,a%b);}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
const int MOD =  1e9+7;
const int inf = 2e9;
const int uinf = INT_MIN;
const long long INF = 9e18;
const long long UINF = LLONG_MIN;
const int N = 1e5 + 5; 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin >> n;
  vector<int> a (n + 1),res(n + 1,0);
  vector<int> count(N,0);
  int ma = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    ma = max(ma,a[i]);
    count[a[i]]++;
  }
  for (int i = 1; i <= ma; i++){
    count[i] += count[i-1];
  }
  // for (int i = ma; i >= 1; i--){ other
  //   count[i] = count[i-1];
  // }
  // count[0] = 0;
  // for (int i = 1; i <= n; i++){
  //   res[count[a[i]] + 1] = a[i];
  //   ++count[a[i]];
  // }
  for (int i = n; i >= 1; i--){
    res[count[a[i]]] = a[i];
    count[a[i]]--;
  }
  for (int i = 1; i <= n; i++) cout << res[i] << ' ';
  return 0;
}
