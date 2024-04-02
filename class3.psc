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
