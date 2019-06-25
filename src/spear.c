#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }


    lb = -1;
    ub = n;
    int a = 0;
    while(ub - lb > 1){
        int x = (lb + ub)/2;
        for(j = 0; j < n; j++){
            a = a + A[j]/x;
        }
        
        if(a >= k) ib = x;
        else ub = x;
    }
    
    printf("%d\n", ub);

  return 0;
}
