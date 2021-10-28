/*
GUDI�O SANTOYO RAFAEL OTNIEL
VERDUZCO TADEO CARLOS ANTONIO

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){

    system("color b0");

    int n, i, x, y, resultado, operacion;

    printf("Suma (1) \nResta (2) \nMultiplicacion (3) \nDivision (4)\n");
    printf("\nElige el numero de operaciones a llevar a cabo: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("\nElige una operacion: ");
        scanf("%d", &operacion);
        printf("Los numeros deben estar separados por un espacio.\n");

        switch(operacion){
            case 1:
                printf("Digite los numeros a sumar:");
                scanf("%d %d", &x, &y);
                resultado = x + y;
                printf("\n\tSuma\n\n\tResultado: %d \n", resultado);
                break; 

            case 2:
                printf("Digite los numeros a restar:");
                scanf("%d %d", &x, &y);
                resultado = x - y;
                printf("\n\tResta\n\n\tResultado: %d \n", resultado);
                break; 

            case 3:
                printf("Digite los numeros a multiplicar:");
                scanf("%d %d", &x, &y);
                resultado = x * y;
                printf("\n\tMultiplicacion\n\n\tResultado: %d \n", resultado);
                break; 
                
            case 4:
                printf("Digite los numeros a dividir:");
                scanf("%d %d", &x, &y);
                resultado = x / y;
                printf("\n\tDivision\n\n\tResultado: %d \n", resultado);
                break; 
        }
    }

}
