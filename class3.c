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


#include <stdio.h>

int main(){
	
	
	double baseMayorTrapecio1, baseMenorTrapecio1, alturaTrapecio1,altura1Triangulo;
	double baseMayorTrapecio2, baseMenorTrapecio2, alturaTrapecio2,altura2Triangulo;
	double baseMayorTrapecio3, baseMenorTrapecio3, alturaTrapecio3,altura3Triangulo;
	double areaPentagono2,areaTrapecio2, areaTriangulo2, areaFigura2;
	double areaPentagono3,areaTrapecio3, areaTriangulo3, areaFigura3;
	double areaPentagono1,areaTrapecio1, areaTriangulo1, areaFigura1;
	int figuraMenorArea;

	
	baseMenorTrapecio1 = 5;
	alturaTrapecio1 = 4;
	baseMayorTrapecio1 = 10.76;
	altura1Triangulo = 3.75;
	
	baseMenorTrapecio2 = 2.6;
	alturaTrapecio2 = 8.5;
	baseMayorTrapecio2 = 3.56;
	altura2Triangulo= 1.76;
	
	baseMenorTrapecio3 = 3.56;
	alturaTrapecio3 = 2.3;
	baseMayorTrapecio3 = 9.75;
	altura3Triangulo= 0.56;
	
	areaTrapecio1 = ((baseMayorTrapecio1 + baseMenorTrapecio1)*alturaTrapecio1)/2;
	areaTriangulo1 = baseMenorTrapecio1 * altura1Triangulo/2;
	areaPentagono1 = (5*baseMayorTrapecio1*baseMayorTrapecio1/1.45)/2;
	areaFigura1 =  areaPentagono1 + areaTrapecio1 + areaTriangulo1;
	
	printf("El area de la figura 1 es: %lf cm2\n", areaFigura1);
	printf("La cual esta compuesta por el area del triangulo: %lf cm2\n",areaTriangulo1);
	printf("La cual esta compuesta por el area del trapecio: %lf cm2\n",areaTrapecio1);
	printf("La cual esta compuesta por el area del pentagono: %lf cm2\n",areaPentagono1);
	
	areaTrapecio2 = ((baseMayorTrapecio2 + baseMenorTrapecio2)*alturaTrapecio2)/2;
	areaTriangulo2 = (baseMenorTrapecio2 * altura2Triangulo)/2;
	areaPentagono2 = (5*baseMayorTrapecio2*baseMayorTrapecio2/1.45)/2;
	areaFigura2 =  areaPentagono2 + areaTrapecio2 + areaTriangulo2;
	
	printf("El area de la figura 2 es: %lf cm2\n", areaFigura2);
	printf("La cual esta compuesta por el area del triangulo: %lf cm2\n",areaTriangulo2);
	printf("La cual esta compuesta por el area del trapecio: %lf cm2\n",areaTrapecio2);
	printf("La cual esta compuesta por el area del pentagono: %lf cm2\n",areaPentagono2);
	
	areaTrapecio3 = ((baseMayorTrapecio3 + baseMenorTrapecio3)*alturaTrapecio3)/2;
	areaTriangulo3 = baseMenorTrapecio3*altura3Triangulo/2;
	areaPentagono3 = (5*baseMayorTrapecio3*baseMayorTrapecio3/1.45)/2;
	areaFigura3 =  areaPentagono3 + areaTrapecio3 + areaTriangulo3;
	
	printf("El area de la figura 2 es: %lf cm2\n", areaFigura3);
	printf("La cual esta compuesta por el area del triangulo: %lf cm2\n",areaTriangulo3);
	printf("La cual esta compuesta por el area del trapecio: %lf cm2\n",areaTrapecio3);
	printf("La cual esta compuesta por el area del pentagono: %lf cm2\n",areaPentagono3);
	
	figuraMenorArea = (areaFigura1<areaFigura2 && areaFigura1<areaFigura3)*1 + (areaFigura2<areaFigura1 && areaFigura2<areaFigura3)*2 + (areaFigura3<areaFigura1 && areaFigura3<areaFigura2)*3;
	
	printf("La figura %d es la que tiene menor area\n",figuraMenorArea);
