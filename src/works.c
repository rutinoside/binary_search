#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, j lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

    lb = -1;
    ub = n;
    int m = 1;
    int a = 0;
    while(ub - lb > 1){
        int x = (lb + ub)/2;
        for(j = 0; j < n; j++){
            if(x<A[j]){
                m = m + k;
                break;
            }
            if(a+A[j]>x){
                a=A[j];
                m=m+1;
            }
            else{
                a=a+A[j];
            }
            }
            if(m > k) ib = x;
        else ub = x;
    
    
    printf("%d\n", ub);

  return 0;
}
