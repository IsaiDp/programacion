#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar los tres números al usuario

    printf("Ingresa el primer número: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer número: ");
    scanf("%d", &num3);

    // Determinar cuál número es el mayor
    
    if (num1 >= num2 && num1 >= num3) {
        printf("El número mayor es: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("El número mayor es: %d\n", num2);
    } else {
        printf("El número mayor es: %d\n", num3);
    }

    return 0;
}