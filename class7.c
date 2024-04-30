#include <stdio.h>
/*Prototipo implementacion*/
void leerDosNumeros(int *num1, int*num2);
int validarSiSonAmigos(int num1, int num2);
int calcularSumaDivisores(int num);/*Como en la implementacion son nombres dif, en el prot puede ser otro nombre*/      


int main (){
	int num1,num2,sonAmigos;
	/*Leer datos son de salida*/
	leerDosNumeros(&num1,&num2);
	/* validacion que devuelve un datp*/
	sonAmigos=validarSiSonAmigos(num1,num2);
	
	
	if(sonAmigos){
		printf("Los numeros son amigos");
		
	}
	else{
		printf("No son amigos");
	}
	return 0;
}

/*Implementacion*/
void leerDosNumeros(int *num1, int *num2){
	
	printf("Ingrese los dos numeros a evaluar: ");
	scanf("%d %d", &(*num1),&(*num2)); /*El & con el * se cancelan se puede poner num1,num2*/
	
}

int validarSiSonAmigos(int num1, int num2){
	
	int sum1,sum2;
	
	sum1=calcularSumaDivisores(num1);
	sum2=calcularSumaDivisores(num2);
	return(sum1==num2 && sum2==num1);
	
}

int calcularSumaDivisores(int num){
	
	int suma,divisor;
	
	divisor=1;
	suma=0;
	while(divisor<num){
		if(num%divisor==0){
			suma=suma+divisor;
			
		}
		divisor++;
	}
	return suma;
}
