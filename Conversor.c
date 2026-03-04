#include <stdio.h>

int main() {
    int opcion;
    float cantidad;
    
    // Tasas de cambio (puedes actualizarlas)
    float tasaUSD = 7.80;   // 1 USD = 7.80 GTQ
    float tasaEUR = 8.50;   // 1 EUR = 8.50 GTQ
    
    printf("=====================================\n");
    printf("     CONVERSOR DE MONEDAS\n");
    printf("=====================================\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dolares a Euros\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("Resultado: %.2f USD\n", cantidad / tasaUSD);
            break;
        case 2:
            printf("Resultado: %.2f EUR\n", cantidad / tasaEUR);
            break;
        case 3:
            printf("Resultado: %.2f GTQ\n", cantidad * tasaUSD);
            break;
        case 4:
            printf("Resultado: %.2f GTQ\n", cantidad * tasaEUR);
            break;
        case 5:
            printf("Resultado: %.2f EUR\n", (cantidad * tasaUSD) / tasaEUR);
            break;
        case 6:
            printf("Resultado: %.2f USD\n", (cantidad * tasaEUR) / tasaUSD);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    return 0;
}