#include <stdio.h>

int main()
{
    int numero, i, termo1 = 0, termo2 = 1, proximoTermo;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    // verifica se o número informado é 0 ou 1, que são os primeiros termos da sequência
    if (numero == 0 || numero == 1)
    {
        printf("%d pertence a sequencia de Fibonacci.\n", numero);
        return 0;
    }

    // calcula os próximos termos da sequência até que o número informado seja encontrado ou ultrapassado
    for (i = 2; i <= numero; i++)
    {
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;

        if (proximoTermo == numero)
        {
            printf("%d pertence a sequencia de Fibonacci.\n", numero);
            return 0;
        }
        else if (proximoTermo > numero)
        {
            printf("%d nao pertence a sequencia de Fibonacci.\n", numero);
            return 0;
        }
    }

    return 0;
}