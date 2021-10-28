/*
GUDIÑO SANTOYO RAFAEL OTNIEL
VERDUZCO TADEO CARLOS ANTONIO

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){

    system("color b0");

    int numeros[7], x, i, n, a;

	printf("\t\tIngrese 7 numeros, separelos con un espacio: ");
    for(i=0; i<7; i++){
        scanf("%d",&x);
        numeros[i]=x;
    }
    
	a=0;
	    
	for(i=0; i<7; i++){
        n=numeros[i];
        if(0<n && n<=30){
        	if(a==0){
        		printf("\n\t\t\tEntre 1 y 30:");
        		a++;
        }
            printf(" %d",numeros[i]);
        }
    }
    
	a=0;
    
    for(i=0; i<7; i++){
        n=numeros[i];
        if(30<n && n<=60){
        	if(a==0){
    	    	printf("\n\n\t\t\tEntre 30 y 60:");
    	    	a++;
        }
            printf(" %d",numeros[i]);
        }
    }
    
	a=0;

    for(i=0; i<7; i++){
        n=numeros[i];
        if(60<n && n<=90){
        	if(a==0){
        		printf("\n\n\t\t\tEntre 60 y 90:");
        		a++;
        }
            printf(" %d",numeros[i]);
        }
    }
    
	a=0;
    
    for(i=0; i<7; i++){
        n=numeros[i];
        if(100<=n){
        	if(a==0){
        		printf("\n\n\t\t\tMayor a 100:");
        		a++;
        }
            printf(" %d",numeros[i]);
        }
    }
    
    getch();

}
