#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int operation;
    printf("Calculadora!\n 1 - SOMA\n 2 - SUBTRACAO\n 3 - MULTIPLICACAO\n 4 - DIVISAO\n 5 - FATORIAL\n 6 - RAIZ\n Digite o numero da operacao escolhida acima que deseja realizar: ");
    scanf("%d", &operation);

    if(operation == 1)
    {
        float num1Sum;
        float num2Sum;
        float resultSum;

        printf("Digite dois numeros: ");
        scanf("%f %f", &num1Sum, &num2Sum);

        resultSum = num1Sum + num2Sum;
        printf("Resultado: %.2f\n", resultSum);
    }
    else if(operation == 2)
    {
        float num1Subtraction;
        float num2Subtraction;
        float resultSubtraction;

        printf("Digite dois numeros: ");
        scanf("%f %f", &num1Subtraction, &num2Subtraction);

        resultSubtraction = num1Subtraction - num2Subtraction;
        printf("Resultado: %.2f\n", resultSubtraction);
    }
    else if(operation == 3)
    {
        float num1Multiplication;
        float num2Multiplication;
        float resultMultiplication;

        printf("Digite dois numeros: ");
        scanf("%f %f", &num1Multiplication, &num2Multiplication);

        resultMultiplication = num1Multiplication * num2Multiplication;
        printf("Resultado: %.2f\n", resultMultiplication);
    }
    else if(operation == 4)
    {
        float num1Division;
        float num2Division;
        float resultDivision;

        printf("Digite dois numeros: ");
        scanf("%f %f", &num1Division, &num2Division);

        if(num2Division == 0)
        {
            printf("Nao e possivel dividir por 0!");

            return 1;
        }
        
        resultDivision = num1Division / num2Division;
        printf("Resultado: %.2f\n", resultDivision);
    }
    else if(operation == 5)
    {
        int num;
        int i;
        long long fatorial;

        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num < 0)
        {
            printf("Nao existe fatorial de um numero negativo!");

            return 1;
        }
    
        i = num;
        fatorial = num;

        do
        {
            i--;
            fatorial *= i;
        }
        while(i != 1);

        printf("Resultado: %lld\n", fatorial);
    }
    else if(operation == 6)
    {
        int num;
        int radical;
        float raiz;

        printf("Digite o numero e o radical da raiz que deseja extrair dele: ");
        scanf("%d %d", &num, &radical);

        raiz = pow(num, 1.0/radical);

        printf("Resultado: %.2f\n", raiz);
    }

    return 0;
}