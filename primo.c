#include <stdio.h>

int primo (int n){
  int i = 1;
  int divisor;
  while (i < n){
  
    if (n%i == 0){
      divisor = i;
    }
    i++;
  }
  
  if (divisor == 1) {
    printf("É primo.\n");
  } else {
    printf("Não é primo.\n");
  }
  return 0;
}
  
  int main () {
    int n;
    printf("Digite um número para saber se é primo: ");
    scanf("%d", &n);
    printf("%d\n", primo(n));
    return 0;
  }
  
