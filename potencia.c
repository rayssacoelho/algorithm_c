#include <stdio.h>

int potencia (int n){
  if (n==0){
    return 1;
  } else {
    int b = 1;
    while (n>=1) {
      b = b*2;
      n--;
    }
    return b;
  }
}
  
  int main () {
    int n;
    scanf("%d", &n);
    printf("2 elevado a %d é: %d\n", n, potencia(n));
    return 0;
  }
  
