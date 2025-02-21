#include<stdio.h>
#include<math.h>
#define ll long long
double a[10000];
int main(){
  int n; float u,k;
  scanf("%d%f%f",&n,&u,&k);
  int cnt = n + 1;
  for (int i = 1; i <= n + 1;i++){
    scanf("%lf",&a[i]);
  }
  for (int i = 1; i <= n + 1; i++){
    double res = a[1];
    for (int j = 2; j <= cnt; j++){
      res *= k;
      res += a[j];
      a[j] = res;
    }
    a[cnt] = res;
    --cnt;
  }
  int mu = n;
  if(u != 1){
    for (int i = 1; i <= n; i++){
      printf("%.3lf ",(double)pow(u,mu) * a[i]);
      --mu;
    }
    printf("%.3lf",a[n+1]);
  }
  else for (int i = 1; i <= n + 1; i++) printf("%.3lf ",a[i]);
}
