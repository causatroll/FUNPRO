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
