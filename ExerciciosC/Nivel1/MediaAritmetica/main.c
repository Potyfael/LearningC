#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    float media = (n1 + n2) / 2.0;

    printf("Nota 1: %.2f\n", n1);
    printf("Nota 2: %.2f\n", n2);
    printf("Media: %.2f", media);

    return 0;
}
