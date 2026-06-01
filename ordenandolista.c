#include <stdio.h>

// Função para ordenar de forma crescente
int ordemc (int* l, int n){
  int p = 0;
  for (int j = 0; j < n - 1; j++) {
    // Adicionado o '- j' para otimizar
    for (int i = 0; i < n - 1 - j; i++) { 
      if (l[i] > l[i + 1]) {
        p = l[i + 1];
        l[i + 1] = l[i];
        l[i] = p;
      }
    }
  }
  return 0;
}

// Função para ordenar de forma decrescente
int ordemdc (int* l, int n){
  int p = 0;
  for (int j = 0; j < n - 1; j++) {
    // Ajustado para 'n - 1 - j'
    for (int i = 0; i < n - 1 - j; i++) { 
      if (l[i] < l[i + 1]) { // SINAL INVERTIDO (<): Garante a ordem decrescente
        p = l[i + 1];
        l[i + 1] = l[i];
        l[i] = p;
      }
    }
  }
  return 0;
}

int main (void) {
     printf("Programa para ordenar lista!\n");
     printf("Escolha a ordem. \nDigite: \n(1) para ordem CRESCENTE \n(2) para ordem DECRESCENTE\n");
     int o;
     scanf("%d", &o);
     
     int n;
     printf("Digite o tamanho da lista: ");
     scanf("%d",&n);
     
     int v[n]; 
     printf("Digite os elementos da lista:\n");
     for (int a = 0; a < n ; a++){
        printf("Elemento [%d]: ", a + 1);
        scanf("%d", &v[a]);
      }
      
    if (o == 1) {
        ordemc(v, n);
    } else {
        ordemdc(v, n);
    }
    
    printf("\nLista ordenada: ");
    for (int a = 0; a < n; a++) {
        printf("%d ", v[a]);
    }
    printf("\n");
    return 0;
}
