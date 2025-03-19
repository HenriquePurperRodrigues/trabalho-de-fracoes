#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

                    // S.O. Windows 10 / 11
                    // Autor: Henrique Purper Rodrigues
                    // GNU GCC Compiler


//numeradores e denominadores para as frações

int nume1, denom1, nume2, denom2;

void obterFracoes (){

    printf("Digite a primeira fracao (numerador e denominador): "); //ex: 1 2
    scanf("%d %d", &nume1, &denom1);

    printf("Digite a segunda fracao (numerador e denominador): "); //ex: 3 4
    scanf("%d %d", &nume2, &denom2);

    if (denom1 == 0 || denom2 == 0) {
        printf("Denominador não pode ser zero!!\n\n");
        obterFracoes();
    }
}
void somarFracoes ()
{
    int numerador;
    int denominador;

    if (denom1 != denom2)
    {
        int numerador = nume1 * denom2 + denom1 * nume2;
        int denominador = denom1 * denom2;
        printf("\nO resultado da soma é %d|%d\n", numerador, denominador);

            //Comando while usado para simplificação
            while (numerador % 2 == 0 || denominador % 2 == 0)
            {
            numerador /= 2;
            denominador /= 2;
            }
         printf("\nO resultado simplificado é %d|%d\n", numerador, denominador);
    } else {
        int numerador = nume1 + nume2;
        int denominador = denom1;
        printf("O resultado da soma é %d|%d\n", numerador, denominador);

            //Novamente
            while (numerador % 2 == 0 || denominador % 2 == 0)
            {
            numerador /= 2;
            denominador /= 2;
            }
         printf("\nO resultado simplificado é %d|%d\n", numerador, denominador);
    }
}

void subtrairFracoes ()
{
    int numerador;
    int denominador;

    if (denom1 != denom2)
    {
        int numerador = nume1 * denom2 - nume2 * denom1;
        int denominador = denom1 * denom2;
        printf("O resultado da subtração é %d|%d\n", numerador, denominador);

            while (numerador % 2 == 0 || denominador % 2 == 0)
            {
            numerador /= 2;
            denominador /= 2;
            }
            printf("\nO resultado simplificado é %d|%d\n", numerador, denominador);
    } else {
        int numerador = nume1 - nume2;
        int denominador = denom1;
        printf("O resultado da subtração é %d|%d\n", numerador, denominador);

            while (numerador % 2 == 0 || denominador % 2 == 0)
            {
            numerador /= 2;
            denominador /= 2;
            }
            printf("\nO resultado simplificado é %d|%d\n\n", numerador, denominador);
    }
}

void multiplicarFracoes ()
{
    int numerador;
    int denominador;

    numerador = nume1 * nume2;
    denominador = denom1 * denom2;
    printf("\nO resultado da multiplicação da fração é %d|%d\n", numerador, denominador);

        while (numerador % 2 == 0 || denominador % 2 == 0)
        {
        numerador /= 2;
        denominador /= 2;
        }
        printf("\nO resultado simplificado é %d|%d\n\n", numerador, denominador);

}

void dividirFracoes ()
{
    int numerador;
    int denominador;

    numerador = nume1 * denom2;
    denominador = denom1 * nume2;
    printf("\nO resultado da divisão é %d|%d\n", numerador, denominador);

        while (numerador % 2 == 0 || denominador % 2 == 0)
        {
        numerador /= 2;
        denominador /= 2;
        }
        printf("\nO resultado simplificado é %d|%d\n\n", numerador, denominador);
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int menu;

    while (1)
    {
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Fim\n");
        printf("O que deseja? ");
        scanf("%d", &menu);

        if (menu == 5) {
            break;
        }

        switch (menu)
        {
            case 1:

            obterFracoes();
            somarFracoes();
            break;

            case 2:
            obterFracoes();
            subtrairFracoes ();
            break;

            case 3:
            obterFracoes();
            multiplicarFracoes();
            break;

            case 4:
            obterFracoes();
            dividirFracoes();
        }
    }
}
