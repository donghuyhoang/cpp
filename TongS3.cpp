#include<bits/stdc++.h>
using namespace std;
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
  double x,n; cin >> x >> n; 
  ll giaithua = 1;
  double res = 0;
  for (int i = 1; i <= n; i++){
  	giaithua *= i;
  	res += (double)(pow(x,i) / giaithua);
	} 
	res += 1;
	cout << fixed << setprecision(2) << res;	
}

