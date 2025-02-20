#include <stdio.h>
#define ll long long
int main(){
		int x; scanf("%d",&x);
		double res = 0,ans = 1, tmp = 1;
		ll giaithua = 1;
		int cnt = 1;
		while(tmp / giaithua >= 1e-6){
				res += tmp / giaithua;
				tmp *= x;				
				giaithua *= cnt;
				++cnt;
		}
		printf("%llf",res);
}
