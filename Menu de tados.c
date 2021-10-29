#include<stdio.h>
#include<conio.h>
#include<windows.h>

int i,a;

int main(){
	
	system("color b0"); 	
	
	while(i==0){
		system("cls");
			
		printf("\n1.-Datos basicos \n");
		printf("2.-Indicar tu estatus segun el insen \n");
		printf("3.-Cambio de moneda \n");
		printf("4.-Gasto de gasolina \n");
		printf("5.-Salir\n");
		
		printf("Seleccione una opcion:");
		scanf("%d",&a);
		
		switch(a){
			case 1:
				//datos basicos
				datos();
				break;
				
			case 2:
				//Indicar tu estatus segun el insen
				status();
				break;
				
			case 3:
				//Cambio de moneda
				moneda();
				break;
				
			case 4:
				//Gasto de gasolina
				gasolina();
				break;
				
			case 5:
				//Salir
				salir();
				break;
			}
		}	
}

void datos(){
	system("cls");
	
	int anioAct=2021 ,anioNac, edad;
	char nombre[50];
	
	printf("\n\t\t\tDatos basicos:");

	printf("\n\n\t\tIngrese su año de nacimiento:");
	scanf("%d",&anioNac);
	printf("\t\tIngrese su nombre:");
	scanf("%s",&nombre);
	
	system("cls");
	
	printf("\n\t\t\tDatos basicos:");
	edad=anioAct-anioNac;
	printf("\n\t\tNombre: %s \n\t\tEdad: %d", nombre, edad);
	
	getch();
}

void status(){
	system("cls");
	
	int edad;
	char nombre[50];
	
	printf("\n\t\tEstatus segun el insen");
	
	printf("\n\n\t\tIngrese su nombre:");
	scanf("%s",&nombre);
	printf("\n\t\tIngrese su edad:");
	scanf("%d",&edad);
	
	system("cls");
	
	printf("\n\t\t\tEstatus segun el insen");
	
	if(edad<12){
		printf("\n\n\t\t\t%s es niño",nombre);
	
	}
	
	else if(12<edad && edad<30){
		printf("\n\n\t\t\t%s es jove",nombre);
	}
	
	else if(30<edad && edad<60){
		printf("\n\n\t\t\t%s es adulto",nombre);
	}
	
	else if (60<edad){
		printf("\n\n\t\t\t%s es anciano",nombre);
	}
	
	getch();
}

void moneda(){
	system("cls");
	float pesos, dolares,dolar=20.33;
	
	printf ("\n\t\tCambio de moneda ");
	printf ("\n\n\t\tIntroduce la cantidad en pesos mexicanos:");
	scanf("%f",&pesos);
	dolares=pesos/dolar;
	
	
	
	system("cls");
	
	printf("%.2f pesos = %.2f dolares",pesos, dolares);
	
	
	getch();
}

void gasolina(){
	system("cls");
	int litros, pesos;
	
	
	getch();
}

void salir(){
	i=1;
}
