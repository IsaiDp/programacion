#include <stdio.h>
#include <string.h>
int main() {
char saludo[100] = "Hola!, "; //Variable que contiene el saludo inicial.
char mensaje[] = "Buenos dias, Isai."; //Variable que contiene el mensaje que concatenaremos a la primer variable
strcat(saludo, mensaje); // Uso la funcion strcat para asi poder concatenar la variable de mensaje junto a la de saludo.
printf("%s\n", saludo); //Esta funcion es para mostrar el mensaje.
return 0;
}
