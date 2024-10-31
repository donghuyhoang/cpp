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
  int n; cin >> n;
  if(n == 1) return cout << 1,0;
  else if(n == 2) return cout << 2,0;
	int a[100];
	a[0] = 6;
	ll res = a[0];
	int nho = 0,q;
	int cnt = 1;
	for (int k = 4; k <= n; k++){
		for (int i = 0; i < cnt; i++){
			q = nho;
			nho = (a[i] * k + nho) / 10; 
			a[i] = (a[i] * k + q) % 10;
		}
		while(nho){
			a[cnt] = nho % 10;
			nho /= 10;
			++cnt;
		}
	}
	for (int i = cnt - 1; i >= 0; i--) cout << a[i];
}

