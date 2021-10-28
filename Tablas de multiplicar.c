/*
GUDI�O SANTOYO RAFAEL OTNIEL
VERDUZCO TADEO CARLOS ANTONIO

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){

    system("color b0");

    int n, i, r;

    printf("\n\t\tDigite un numero: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++){
        r=n*i;
        printf("\n\t\t\t%d X %d = %d",n,i,r);
    }
    getch();
}
