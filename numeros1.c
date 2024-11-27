#include <stdio.h>

int main() {
    int numeros3[3], numeros5[5], numeros100[100];
    int i;

    // Pedir 3 números
    printf("Ingresa 3 números:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &numeros3[i]);
    }

    // Pedir 5 números
    printf("Ingresa 5 números:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros5[i]);
    }

    // Pedir 100 números
    printf("Ingresa 100 números:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &numeros100[i]);
    }

    // Imprimir un mensaje indicando que terminó
    printf("Gracias por ingresar los números.\n");
    return 0;
}
