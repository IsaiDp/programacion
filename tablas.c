#include <stdio.h>

int main() {
    int numero, i;

    // Solicitar un número al usuario
    printf("Ingresa un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &numero);

    // Generar y mostrar la tabla de multiplicar
    printf("Tabla de multiplicar del %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
