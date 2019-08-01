#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, j, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

    lb = 0;
    ub = 1e9;
    while(ub - lb > 1){
        int m = (lb + ub)/2;
        int x = 1;
        int y = 0;
        
        for(j = 0; j < n; j++){
            if(m<A[j]){
                x = x + k;
                break;
            }
            if(y+A[j]>m){
                y=A[j];
                x=x+1;
            }
            else{
                y=y+A[j];
            }
            }
            if(x <= k) ub = m;
        else lb = m;
    
}    
    printf("%d\n", ub);

  return 0;
}
