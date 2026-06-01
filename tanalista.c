#include <stdio.h>

int busca (int * l, int n, int k){
  int i = 0;
  while (i < n){
  
    if (l[i] == k){
      return i + 1;
    }
    i++;
  }
  return 0;
}
  
  int main () {
    int v[8] = {7,8,9,0,1,2,3,4};
    printf("%d\n", busca(v, 8, 2));
    return 0;
  }
  
