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


void countingsortbydigit(vector<int> &a, int n, int exp){
    vector<int> count(11,0);
    vector<int> tmp(n + 1);
    for (int i = 1; i <= n; i++){
        int digit = (a[i] / exp) % 10;
        count[digit]++;
    } 
    for (int i = 1; i <= 9; i++) {
        count[i] += count[i-1];
    }
    for (int i = n; i >= 1; i--){
        int digit = (a[i] / exp) % 10;
        tmp[count[digit]] = a[i];
        count[digit]--;
    }  
    for (int i = 1; i <= n; i++){
        a[i] = tmp[i];
    }
}

void radix_sort(vector<int>& a,int n){
    int exp = 1;
    int ma = 0;
    for (int i = 1; i <= n; i++){
        ma = max(ma,a[i]);
    }
    while(ma / exp > 0){
        countingsortbydigit(a,n,exp);
        exp *= 10;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) cin >> a[i];
  radix_sort(a,n);
  for (int i = 1; i <= n; i++) cout << a[i] << ' ';
  return 0;
}
