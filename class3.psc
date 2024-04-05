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





Algoritmo Calor
	
	Escribir "Escenario 1 - cobre: "
	Escribir "Ingrese la masa en gramos: "
	Leer masa_cobre
	
	Escribir "Ingrese las temperaturas inicial y final en grados Fahrenheit: "
	Leer temperaturaInicial_cobre, temperaturaFinal_cobre
	
	calorEspecifico_cobre <- 0.093
	calorTransferido_cobre <- masa_cobre*calorEspecifico_cobre*(5*(temperaturaFinal_cobre-32)/9 - (5*(temperaturaInicial_cobre-32)/9))
	
	Escribir "El calor necesario para elevar la temperatura de ",temperaturaInicial_cobre " grados Fahrenheit a ",temperaturaFinal_cobre " grados Fahrenheit es: ", calorTransferido_cobre " calorias"
	

	Escribir "Escenario 2 - aire: "
	Escribir "Ingrese la masa en kilogramos: "
	Leer masa_aire
	
	Escribir "Ingrese las temperaturas inicial y final en grados Centigrados: "
	Leer temperaturaInicial_aire, temperaturaFinal_aire
	
	calorEspecifico_aire <- 0.24
	calorTransferido_aire <- (masa_aire*1000)*calorEspecifico_aire*(temperaturaFinal_aire-temperaturaInicial_aire)
	 
	Escribir "El calor necesario para elevar la temperatura de ",temperaturaInicial_aire " grados Centigrados a ",temperaturaFinal_aire " grados Centigrados es: ", calorTransferido_aire " calorias"
	
	comparacion1 <- calorTransferido_cobre >= calorTransferido_aire
	comparacion2 <- calorTransferido_aire >= calorTransferido_cobre
	
	Escribir "El escenario 1 requiere mayor o igual calor que el escenario 2: ", comparacion1
	Escribir "El escenario 2 requiere mayor o igual calor que el escenario 1: ", comparacion2
	
FinAlgoritmo
