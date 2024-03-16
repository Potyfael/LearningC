#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    int dobro = n * 2;
    int triplo = n * 3;
    float raiz2 = pow((float) n, 2.0);

    printf("O numero digitado: %d\n", n);
    printf("O dobro de %d: %d\n", n, dobro);
    printf("O triplo de %d: %d\n", n, triplo);
    printf("A raiz quadrada de %d: %f\n", n, raiz2);

    return 0;
}
