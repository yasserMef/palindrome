#include <stdio.h>

int main() {
    int nombre, nombreOriginal, inverse = 0;


    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    nombreOriginal = nombre;

    while (nombre > 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }


    if (nombreOriginal == inverse) {
        printf("%d est un palindrome.\n", nombreOriginal);
    } else {
        printf("%d n'est pas un palindrome.\n", nombreOriginal);
    }

    return 0;
}
