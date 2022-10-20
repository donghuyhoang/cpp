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

ll binary_pow(int a,int b){
  int res = 1;
  while(b){
    if(b & 1){
      res *= a;
    }
    b >>= 1;
    a *= a;
  }
  return res;
}

int main(){                           
//    freopen("input.txt","r",stdin);                                               
//    freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  
  cerr << "\nTime: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
  return 0;
}                            
