#include <stdio.h>

int main() {

    int opcion;
    float cantidad;
    
    float GTQ_USD = 7.8;
    float GTQ_EUR = 8.5;

    printf("===== CONVERSOR DE MONEDAS =====\n");
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
            printf("Resultado: %.2f USD\n", cantidad / GTQ_USD);
            break;

        case 2:
            printf("Resultado: %.2f EUR\n", cantidad / GTQ_EUR);
            break;

        case 3:
            printf("Resultado: %.2f GTQ\n", cantidad * GTQ_USD);
            break;

        case 4:
            printf("Resultado: %.2f GTQ\n", cantidad * GTQ_EUR);
            break;

        case 5:
            printf("Resultado: %.2f EUR\n", (cantidad * GTQ_USD) / GTQ_EUR);
            break;

        case 6:
            printf("Resultado: %.2f USD\n", (cantidad * GTQ_EUR) / GTQ_USD);
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}
