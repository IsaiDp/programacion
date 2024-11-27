#include <stdio.h>

int main() {
    int suma = 0; // Variable para almacenar la suma
    int i;

    // Calcular la sumatoria del 1 al 1000
    for (i = 1; i <= 1000; i++) {
        suma += i; // Sumar el valor actual de i
    }

    // Mostrar el resultado
    printf("La sumatoria de los números del 1 al 1000 es: %d\n", suma);

    return 0;
}
