#include<stdio.h>
#include<math.h>
#define ll long long
double a[10000];
int main(){
  int n; float u,k;
  printf("Nhap so luong he so: "); scanf("%d",&n);
  printf("Nhap he so cua y: "); scanf("%f",&u);
  printf("Nhap he so c: "); scanf("%f",&k);
  printf("Nhap cac he so: ");
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
      if(!a[i]) {
        --mu;
        continue;
      }
      printf("%.3lfy^%d ",(double)pow(u,mu) * a[i],mu);
      --mu;
    }
  }
  else {
    for (int i = 1; i <= n; i++) {
        if(!a[i]) {
          --mu;
          continue;
        }
        printf("%.3lfy^%d ",a[i],mu);
        --mu;
    }
  }
  printf("%.3lf",a[n+1]);
}
