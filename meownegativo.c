#include <stdio.h>

int main() {
    int numero;

    // Solicitar un número al usuario
    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // Verificar si el número es negativo
    if (numero < 0) {
        printf("meow\n");
    } else {
        printf("El número no es negativo.\n");
    }

    return 0;
}
