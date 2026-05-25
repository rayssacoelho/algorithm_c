#include <stdio.h>

/* Calcula a área do círculo de raio 'r' em metros quadrados */

float area(float r)
{   float a;
    a = 3.14 * r * r;
    return a;
}

int main()
{   float r;
    r = 15;
    printf("Área = %.2f m²\n", area(r));
    return 0;
}
