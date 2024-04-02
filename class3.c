#include <stdio.h>
#include <math.h>

int main(){
	
	double lado,area;
	printf("Ingrese el lado del cuadrado: ");
	scanf("%lf",&lado);
	
	if(lado>0){
		area = pow(lado,2);
		printf("El area del cuadrado es: %lf",area);	
	}
	else {
		printf("El lado ingresado es incorrecto");
	}	
	
	return 0;
	
}
