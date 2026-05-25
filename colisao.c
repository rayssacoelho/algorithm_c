#include <stdio.h>

/* Verificar se tem colisão entre círculos */

struct point {float x; float y;}; /* Composição do ponto */

struct circle {struct point c; float r;}; /* Composição do círculo */

int collision (struct circle c_a, struct circle c_b)
{
    float x, y, d2, sr;
    x = (c_b.c).x - (c_a.c).x;
    y = (c_b.c).y - (c_a.c).y;
    d2 = (x * x) + (y * y);
    sr = c_a.r + c_b.r;
    
    if (d2 <= (sr * sr)
    {
      return 1;
    }
    return 0;
}

int main()
{
    struct circle c_a;
    struct circle c_b;
    
    c_a.r = 15;
    (c_a.c).x = 0;
    (c_a.c).y = 0;
    
    c_b.r = 15;
    (c_b.c).x = 10;
    (c_b.c).y = 10;
    
    printf("(%f, %f), %f\n", c_a.c.x, c_a.c.y, c_a.r);
    return 0;
}
