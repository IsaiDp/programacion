#include <cs50.h>
#include <stdio.h>

void print_matrix(int number); 
void print_matrix(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("|_|");
        }
        printf("\n");
    }
}

int main(void)
{
    int n = get_int("Ingresa el tamaño de tu matriz: ");
    print_matrix(n);
}
