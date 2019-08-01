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
    ub = 1e9+1;
    while(ub - lb > 1){
        int m = (ub + lb)/2;
        int a = 0; 
        for(j = 0; j < n; j++){
            a = a + A[j]/m;
        }
        
        if(a < k) ub = m;
        else lb = m;
    }
    
    printf("%d\n", lb);

  return 0;
}
