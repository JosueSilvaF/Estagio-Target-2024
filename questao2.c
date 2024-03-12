#include <stdio.h>
#include <stdlib.h>

int pertenceFibonacci(int num) {
    if (num == 0 || num == 1) {
        return 1; // numero encontrado
    }
    
    int a = 0, b = 1, i;

    for (i = a + b; i <= num; i = a + b) {
        if (i == num) {
            return 1; // numero encontrado
        }
        a = b;
        b = i;
    }
    
    return 0; // não encontrado
}

int main() {
    int num;
    
    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &num);
    
    if (pertenceFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }
    
    return 0;
}
