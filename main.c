#include <stdio.h>

int compararChar(const char *cadena, const char *cadena2, int tama) {
    for (int i = 0; i < tama; i++) {
        if (*cadena != *cadena2) {
            return 0;  // Las cadenas no son iguales
        }
    }
    return 1;  // Las cadenas son iguales
}

int main() {
    int tama = 0;

    printf("\nIntroduzca el tamaño de la cadena de caracteres: ");
    scanf("%d", &tama);

    // Asegurarse de que el tamaño sea válido
    if (tama <= 0) {
        printf("\nTamaño inválido. El programa ha terminado.\n");
        return 0;
    }

    char cadena[tama + 1];  // Agregar espacio para el carácter nulo
    char cadena2[tama + 1];  // Agregar espacio para el carácter nulo

    printf("\nIntroduzca una cadena de no más de %d caracteres: ", tama);
    scanf("%s", cadena);

    printf("\nIntroduzca otra cadena de no más de %d caracteres: ", tama);
    scanf("%s", cadena2);

    int resultado = compararChar(cadena, cadena2, tama);

    if (resultado) {
        printf("\nLas cadenas son iguales");
    } else {
        printf("\nLas cadenas no son iguales");
    }

    return 0;
}