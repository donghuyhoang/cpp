// have a good day !
/* dong` huy hoang` */
// Duong` di tu 1 den n. Neu co nhieu hon 1 duong di, in ra duong di bat ki.
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
const int maxn = 2e5 + 5;

int n,m;
vector<pair<int,ll>> adj[maxn];
vector<ll> d(maxn,INF);
bool visited[maxn];
priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> que;
int path[maxn];
void inp(){
  cin >> n >> m;
  for (int i = 1; i <= m; i++){
    int x,y,z; cin >> x >> y >> z;
    adj[x].pb({y,z});
    adj[y].pb({x,z});
  }
}

void dijkstra(int i){
  que.push({0,i});
  while(!que.empty()){
    pair<ll,int> tmp = que.top();
    que.pop();
    int u = tmp.se;
    int kc = tmp.fi;
    if(kc > d[u]) continue;
    for (auto it : adj[u]){
      int v = it.fi;
      ll w = it.se;
      if(d[v] > d[u] + w){
        d[v] = d[u] + w;
        path[v] = u;
        que.push({d[v],v});
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  inp();
  d[1] = 0;
  dijkstra(1);
  if(d[n] != INF){
    cout << d[n] << endl;
    stack<int> st;
    int x = n;
    cout << 1 << ' ';
    while(1){
      st.push(x);
      x = path[x];
      if(x == 1) break;
    }
    while(!st.empty()){
      cout << st.top() << ' ';
      st.pop();
    }
  }
  else cout << -1;
  return 0;
}
