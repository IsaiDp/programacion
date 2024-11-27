#include <stdio.h>
#include <cs50.h>

int main(void) {
    int num = get_int("Dime el numero a multiplicar: ");
    printf("TABLA DEL NUMERO %i\n", num);

    int i = 1;
    while (i < 11) {
        printf("%i x %i = %i\n", num, i, num * i);
        i++;
    }
}
