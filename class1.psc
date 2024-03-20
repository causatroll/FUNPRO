Algoritmo teorema_euler
	cantCaras <- 15
	cantAristas <- 14
	cantVertices <- 1
	es_poliedroConvexo <- cantCaras - cantAristas + cantVertices = 2
	
	Escribir es_poliedroConvexo
	
FinAlgoritmo 

Algoritmo Color_azul
	
	longitud_de_onda <- 462
	es_azul<- longitud_de_onda <=482 y longitud_de_onda >=460
	
	escribir  es_azul
	
FinAlgoritmo

A corregir:

Algoritmo VerificarParalelogramo
	
	Escribir "Ingrese la longitud del lado AB: "
    Leer ladoAB
    Escribir "Ingrese la longitud del lado BC: "
    Leer ladoBC
    Escribir "Ingrese la longitud del lado CD: "
    Leer ladoCD
    Escribir "Ingrese la longitud del lado DA: "
    Leer ladoDA
    Escribir "Ingrese el ángulo A en grados: "
    Leer anguloA
    Escribir "Ingrese el ángulo B en grados: "
    Leer anguloB
    Escribir "Ingrese el ángulo C en grados: "
    Leer anguloC
    Escribir "Ingrese el ángulo D en grados: "
    Leer anguloD
	
    // Verificar si es un cuadrado
    Si (ladoAB=ladoBC y ladoAB=ladoCD y ladoAB=ladoDA y ladoBC=ladoCD Y ladoBC=ladoDA y ladoCD=ladoDA) y (anguloA=90 y anguloB=90 y anguloC=90 y anguloD=90) Entonces
        Escribir "El paralelogramo es un cuadrado."
    Fin Si
	
    // Verificar si es un rectángulo
    Si  (ladoAB<>ladoBC y ladoAB=ladoCD y ladoAB<>ladoDA y ladoBC<>ladoCD Y ladoBC=ladoDA y ladoCD<>ladoDA ) y (anguloA=90 y anguloB=90 y anguloC=90 y anguloD=90)  Entonces
        Escribir "El paralelogramo es un rectángulo."
    Fin Si
	
    // Verificar si es un rombo
    Si (ladoAB=ladoBC y ladoAB=ladoCD y ladoAB=ladoDA y ladoBC=ladoCD Y ladoBC=ladoDA y ladoCD=ladoDA) y (anguloA=anguloC y anguloB=anguloD) Y (anguloA<90 y anguloB<90) y (anguloC>90 y anguloD>90)Entonces
        Escribir "El paralelogramo es un rombo."
    Fin Si
	
    // Verificar si es un romboide
    Si (ladoAB<>ladoBC y ladoAB=ladoCD y ladoAB<>ladoDA y ladoBC<>ladoCD Y ladoBC=ladoDA y ladoCD<>ladoDA ) Y (anguloA<90 y anguloB<90) y (anguloC>90 y anguloD>90) Entonces
        Escribir "El paralelogramo es un romboide."
    Fin Si
	
Fin Algoritmo
