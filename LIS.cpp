#include <bits/stdc++.h>
#define fi first
#define se second
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  //    freopen("input.txt","r",stdin);                                               
	//    freopen("output.txt","w",stdout);	
	int n; cin >> n;
	vector<int> a(n),res;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	res.pb(a[0]);
	for(int i = 1; i < n; i++){
		int x = a[i];
		int m = (int)res.size();
		int j = lower_bound(res.begin(),res.begin() + m,x) - res.begin(); // khong tim duoc tra ve so luong cua mang
		if(j == m) res.pb(x);
		else res[j] = x;
		//cout << j << ' ';
	}
	cout << res.size();
    return 0; 
}
