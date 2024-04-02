Algoritmo multiplo_numero
	
	Escribir "Ingrese el valor de n y m: "
	Leer n,m
	
	residuo <- m mod n //mod calcula el residuo
	
	Si (residuo = 0 ) Entonces
		Escribir " El numero ",m ," es multiplo de ",n
	SiNo
		Escribir " El numero ",m ," no es multiplo de ",n

	FinSi
	
FinAlgoritmo



Algoritmo funcion_tramos
	
	Escribir "Ingrese el valor de x: "
	Leer x
	
	Si (x < 5) Entonces
		fx<- x*x
	SiNo
		si ( 5>=x y x<=10) Entonces
			fx<- x*x*x -1
		SiNo
			fx<-x/2
		FinSi
	FinSi
	Escribir " El Fx es:", fx
FinAlgoritmo
