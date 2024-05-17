#include <stdio.h>
#include <math.h>

/*Prototipos*/
int validarDatos(double lado1, double lado2, double lado3);
void calcularSemiperimetroyArea(double lado1,double lado2, double lado3, double *semiperimetro, double *area );
void imprimirResultados(double semiperimetro, double areadd);
hola mundod

int main (){

	double lado1,lado2,lado3;
	int datosValidos;
	double semiperimetro, area;
	
	printf("Ingrese los tres lados: \n");
	scanf ("%lf %lf %lf", &lado1,&lado2,&lado3);
	/*Invocacion*/  /*Modulo*/   /*Parametros*/
	datosValidos = validarDatos(lado1,lado2,lado3);
	if(datosValidos){
		
		calcularSemiperimetroyArea(lado1,lado2,lado3,&semiperimetro,&area);
		imprimirResultados(semiperimetro,area);
	}
	else{
		printf("Los datos ingresados no son correctos");
	}
	
	
	return 0;
}

/*Implementacion*/
int validarDatos(double lado1, double lado2, double lado3){
	
	int MayoresQueCero, esTriangulo, valido;

	MayoresQueCero = (lado1>0 &&lado2>0 && lado3>0);
	esTriangulo = (lado1+lado2)>lado3 && lado2+lado3>lado1 && lado3+lado1>lado2;
	if (MayoresQueCero && esTriangulo){
	valido=1;
	}
	else{
		valido=0;
	}	


	return valido;

}
void calcularSemiperimetroyArea(double lado1,double lado2, double lado3, double *semiperimetro, double *area ){
	
	*semiperimetro = (lado1+lado2+lado3)/2;
	*area = sqrt( (*semiperimetro)*((*semiperimetro)-lado1) *((*semiperimetro)-lado2) * ((*semiperimetro)-lado3));

}

void imprimirResultados(double semiperimetro, double area){
	
	printf ("El semiperimetro es: %lf \n", semiperimetro);
	printf ("El area es: %lf", area);
	
	
	
}
