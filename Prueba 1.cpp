/*
	GUDIÑO SANTOYO RAFAEL OTNIEL
	VERDUZCO TADEO CARLOS ANTONIO
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(void){
	
	system("color b0");
	
	int i,a; 
	printf("\n\t\tNumeros de 2 en 2 hasta el 150\n\n");
	printf("\t\t------------------------------\n\n\t\t");	
	
	do {
		i+=2;
		printf("%d\t",i);
		if(a==5){
			printf("\n\t\t");
			a=0;	
		}
		a++;
	}while (i<=148);
	
	getch();
	
}

