// Um programa para realizar as 4 operações básicas da matemática.
// Apenas valores INTEIRO

// A program to perform the 4 basic operations of mathematics.
// Only INTEGER values

#include <stdio.h>

void adicao(float *a, float *b, float *resultado) { // sum
    *resultado = *a + *b;
}

void subtracao(float *a, float *b, float *resultado) { // sub
    *resultado = *a - *b;
}

void multiplicacao(float *a, float *b, float *resultado) { // mult
    *resultado = *a * *b;
}

void divisao(float *a, float *b, float *resultado) { // div
    if (*b != 0) {
        *resultado = *a / *b;
    } else {
        printf("Erro: Divisão por zero.\n");
    }
}

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            adicao(&num1, &num2, &resultado);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            subtracao(&num1, &num2, &resultado);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            multiplicacao(&num1, &num2, &resultado);
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            divisao(&num1, &num2, &resultado);
		}
	}


