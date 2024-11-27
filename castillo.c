#include <cs50.h>
#include <stdio.h>

void print_escenario(int alto, int largo);

void print_escenario(int alto, int largo)
{
    // Nivel superior: Cielo con nubes
    for (int i = 0; i < alto - 6; i++)
    {
        for (int j = 0; j < largo; j++)
        {
            if ((i == 0 && (j == 4 || j == 15)) || (i == 1 && (j == 5 || j == 14))) // Nubes en el cielo
                printf("~~~");
            else
                printf("   ");
        }
        printf("\n");
    }

    // Nivel de plataformas y bloques flotantes
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < largo; j++)
        {
            if ((j >= 3 && j <= 5) || (j >= 11 && j <= 13)) // Bloques flotantes
                printf("[?]");
            else
                printf("   ");
        }
        printf("\n");
    }

    // Parte superior del castillo con bandera
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < largo; j++)
        {
            if (j == largo - 6) // Posición de la bandera
                printf(" F ");
            else
                printf("   ");
        }
        printf("\n");
    }

    // Nivel superior del castillo con torres y paredes
    for (int i = 0; i < 2; i++) // Nivel superior con paredes
    {
        for (int j = 0; j < largo; j++)
        {
            if (j == 0 || j == largo - 1)  // Torres del castillo
                printf("|");
            else if (j >= largo - 6 && j <= largo - 2) // Pared del castillo
                printf("[ ]");
            else
                printf("   ");
        }
        printf("\n");
    }

    // Nivel inferior del castillo con puerta y más detalles
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < largo; j++)
        {
            if (j == 1 || j == 5) // Tubos en el suelo
                printf("|||");
            else if (j >= largo - 6 && j <= largo - 2) // Base del castillo
                printf("[ ]");
            else
                printf("___");
        }
        printf("\n");
    }

    // Base del suelo
    for (int i = 0; i < largo; i++)
    {
        printf("___");
    }
    printf("\n");
}

int main(void)
{
    int alto = get_int("Ingresa que tan alto quieres el esenario (recomendado 10): ");
    int largo = get_int("Ingresa que tan ancho quieres el escenario (recomendado 20): ");
    print_escenario(alto, largo);
}
