#include <stdio.h>
/* Suma de cuadrados*/
int main (){
	
	int sumaIte,cont,n,sumaForm ;
	
	printf("Ingrese el valor de n: \n");
	scanf("%d", &n);
	
	
	if(n>=0){
		
		
		sumaIte=0;
		cont=0;
		
		while (cont<=n){
			
			sumaIte = sumaIte + cont*cont;
			cont++;
			}
		printf("La suma de los cuadrados (iteracion) %d \n",sumaIte);
		
	}
	else{
		printf("El valor de n debe ser mayor a 0 \n");
	}
	
	sumaForm= (n*(n+1)*(2*n+1))/6;
	
		printf("La suma de los cuadrados (formula) %d \n",sumaForm);
		
	if(sumaForm==sumaIte){
		printf("La formula es correcta");
	}
	
	return 0;
}





/*Calculo del valor de PI*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
	int cantTerm,i;
	double produ,productoria,valorPi,dif;

	printf("Ingrese la cantidad de terminos \n");
	scanf("%d", &cantTerm);
	
	if(cantTerm>0){
		
		i=1;
		produ=1;
		
		while (i<=cantTerm){
		productoria= pow(4*i,2)/((4*i-1)*(4*i+1));
		produ = produ*productoria;
		i++;
		}
		
		valorPi= produ*2*sqrt(2);
		printf("El valor calculado de PI a traves de la productoria para %d terminos es: %lf \n", cantTerm, valorPi);

		dif = fabs (valorPi - PI );
		
		if(dif >=0.005){
			printf("El error calculado si es considerable (>=0.005): %lf ", dif);
		}
		else{
			printf("El error calculado no es considerable (<0.005): %lf ", dif);
		}
		
	}
	else{
		printf("La cantidad de terminos debe ser mayor que cero \n");
	}
	
    return 0;
}

