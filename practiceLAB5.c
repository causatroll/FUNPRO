//area y semiperimetro de un triangulo
#include <stdio.h>
#include <math.h>

void LeerDatos(double *Lado1,double *Lado2, double *Lado3);
int validarDatos(double Lado1,double Lado2, double Lado3);
void calculaeAreaSemi(double Lado1,double Lado2,double Lado3,double *area,double *s);
void mostrarAreaYsemi(double s, double area);

int main (){
	double Lado1, Lado2, Lado3,area,s;
	int ladosValidados;
	
	LeerDatos(&Lado1, &Lado2, &Lado3);
	ladosValidados=validarDatos(Lado1,Lado2,Lado3);
	
	if(ladosValidados==1){
		calculaeAreaSemi(Lado1,Lado2,Lado3,&area,&s);
		mostrarAreaYsemi(s,area);
	}
	else{
		printf("Alguno de los lados no es valido.");
	}
	
	return 0;
}

void LeerDatos(double *Lado1,double *Lado2, double *Lado3){
	printf ("Ingrese los lado lados del triangulo:\n");
	scanf ("%lf %lf %lf", Lado1, Lado2, Lado3);
}

int validarDatos(double Lado1,double Lado2, double Lado3){
	return (Lado1>0) && (Lado2>0) && (Lado3>0);
}

void calculaeAreaSemi(double Lado1,double Lado2,double Lado3,double *area,double *s){
	
	*s = (Lado1 + Lado2 + Lado3)/2;
	*area= sqrt((*s)*((*s) - Lado1)*((*s) - Lado2)*((*s) - Lado3));
	
}

void mostrarAreaYsemi(double s, double area){
	printf("El semiperimetro del triangulo es: %lf\n", s);
	printf("El area del triangulo es: %lf",area);
	}

//Numeros primos
#include <stdio.h>
#include <math.h>

void leerDatos(int *num);
int validarPrimo(int num);
void mostrarVerificacion(int validadoPrimo);

int main (){
    int num, validadoPrimo;
    leerDatos(&num);
    validadoPrimo = validarPrimo(num);
    if (validadoPrimo != -1) {
        mostrarVerificacion(validadoPrimo);
    }
    return 0;
}

void leerDatos(int *num){
    printf ("Ingrese el número a analizar:\n");
    scanf("%d", num);
}

int validarPrimo(int num){
    int divisor, residuo, cantDivisores;
    if (num > 1) {
        divisor = 1;
        cantDivisores = 0;
        while (divisor <= num) {
            residuo = num % divisor;
            if (residuo == 0) {
                cantDivisores++;
            }
            divisor++;
        }
        return cantDivisores == 2;
    }
    else {
        printf("El número debe ser mayor a uno");
        return -1;
    }
}

void mostrarVerificacion (int validadoPrimo){
    if (validadoPrimo == 1){
        printf("El número es primo");
    }
    else {
        printf("No es primo");
    }
}

// Logaritmo Natural

#include <stdio.h>
#include <math.h>

void leerDatos(double *x, int *n);
double calcularLogaritmo(double x, int n);

int main (){
	double x,logaritmo;
	int n;
	leerDatos(&x,&n);
	
	if(n<0){
		printf("La cantidad de terminos debe ser mayor o igual a 0");
	}
	else{
		if(x==0){
			printf("El logaritmo de %lf es -inf ", x);
		}
		else{
			if(x<0){
				printf("El logaritmo de %lf es nan ",x);
			}
			else{
				logaritmo = calcularLogaritmo (x, n);
				printf ("El logaritmo de %lf es: %lf ",x,logaritmo);
			}
		}
	}

    return 0;
}

void leerDatos(double *x, int *n){
	printf("Ingrese el valor de x: ");
	scanf("%lf",x);
	printf("Ingrese la cantidad de terminos: ");
	scanf("%d",n);
}
double calcularLogaritmo(double x, int n){
	double sumatoria,sumTotal;
	int i;
	i=0;
	sumTotal=0;
	while(i<=n){
		
		sumatoria= (2/((double)2*i+1))*pow(((x-1)/(x+1)),2*i+1);
		sumTotal = sumTotal + sumatoria;
		i++;
	}
	
	return sumTotal;
}

// Base Numero
#include <stdio.h>
#include <math.h>

int VerCifraNum(int numero,int numCifras);
void operandoCifras(int numero, int numCifras,int *mayorCifra,int *sumCifra);

int main (){
	
	int numero,numCifras,ok,mayorCifra,sumCifras,base,cantBase;

	printf("Ingrese el numero: ");
	scanf("%d", &numero);
	printf("Ingrese la cantidad de cifras del numero indicado: ");
	scanf("%d",&numCifras);
	
	if (numCifras<3	|| numCifras>6){
		printf("La cantidad de cifras ingresadas no es correcta");
		
	}
	
	ok = VerCifraNum(numero,numCifras);
	
	if(ok){
		operandoCifras(numero,numCifras,&mayorCifra,&sumCifras);
		printf("La suma de cifras del numero %d y la cifra mayor es %d\n",sumCifras, mayorCifra);
		
		base= mayorCifra + 1;
		cantBase=0;
		while ( base >1 && base<11){
			if(sumCifras%(base-1)==0){
				printf("La base %d es una base que cumple la propiedad. porq la suma de cifras del numero es divisible por %d\n",base,base-1 );
				cantBase++;
			}
			base++;
		}
		if(cantBase==0){
			printf("No se encontro bases que cumplan con la propiedad");
		}
		else{
			printf("La cantidad de bases encopntradas fue: %d",cantBase);
		}
		
	}
	else{
		printf("La cantidad de cifras ingresadas no concuerda con el numero de cifras del numero\n");
	}

    return 0;
}

int VerCifraNum(int numero,int numCifras){
	return ((int)log10(numero)+1)== numCifras;
}
	
void operandoCifras(int numero, int numCifras,int *mayorCifra,int *sumCifras){
	int i,cifra;
	*mayorCifra=0;
	*sumCifras=0;
	i=0;
	
	while(i<numCifras){
		cifra=numero%10;
		numero=numero/10;
		
		*sumCifras=*sumCifras + cifra;
		if(cifra>*mayorCifra){
			*mayorCifra=cifra;
		}
		i++;
	}
}
