#include <stdio.h>

// Verificacao se um número é primo
int primo(int num){
    if (num <= 1){
        return 0; 
    }

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) {
            return 0; // Não é primo
        }
    }

    return 1; // É primo
}

int main(){
    int numeros[10];
    int ref;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    printf("Digite um valor de referência inteiro: ");
    scanf("%d", &ref);

    // a)se o valor de referencia estiver no vetor, imprima a mensagem: "Encontrado!", senão imprima "Não encontrado!"
    int encontrado = 0;
    for (int i = 0; i < 10; i++){
        if (numeros[i] == ref){
            encontrado = 1;
            break;
        }
    }
    printf(encontrado ? "Encontrado!\n" : "Não encontrado!\n");

    // b) imprima os números do vetor que são maiores que o valor referência
    printf("Números maiores que %d:\n", ref);
    for (int i = 0; i < 10; i++){
        if (numeros[i] > ref){
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    // c) imprima quantos números armazenados no vetor são menores que o valor de referência
    int menores = 0;
    for (int i = 0; i < 10; i++){
        if (numeros[i] < ref){
            menores++;
        }
    }
    printf("Quantidade de números menores que %d: %d\n", ref, menores);

    // d) imprima a média dos valores do vetor (15 pontos);
    int soma = 0;
    for (int i = 0; i < 10; i++){
        soma += numeros[i];
    }
    float media = (float)soma / 10;
    printf("Média dos valores do vetor: %.2f\n", media);

    // e) imprima o vetor na ordem inversa
    printf("Vetor na ordem inversa:\n");
    for (int i = 9; i >= 0; i--){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // f) imprima apenas os números primos
    printf("Números primos no vetor:\n");
    for (int i = 0; i < 10; i++){
        if (primo(numeros[i])){
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    // g) imprima a soma dos números ímpares
    int somaImp = 0;
    for (int i = 0; i < 10; i++){
        if (numeros[i] % 2 != 0){
            somaImp += numeros[i];
        }
    }
    printf("Soma dos números ímpares: %d\n", somaImp);

    return 0;
}
