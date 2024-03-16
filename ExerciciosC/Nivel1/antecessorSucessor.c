#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    printf("Numero digitado: %d\n", n);
    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);
    return 0;
}
