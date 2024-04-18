Algoritmo calidad_procesoAdmision
	
	Escribir "Ingrese el aspecto a medir del proceso de admision a la universidad: Publicidad(p), claridad de la informacion (I) o rapiodez en la validacion de los documentos (R): "
	Leer opcionEvaluar
	
	si (opcionEvaluar = 'P') Entonces
		Escribir "¿Considera que la difusion de la admision contenia la informacion que necesitaba?. (Escriba 0 si no contenía y 1 si sí contenía):"
		Leer conteniaDifusion
		Escribir "Considera que lo contactaron las veces neceasarias?(Escriba 0 si no esta de acuerdo y 1 si sí esta de acuerdo):"
		Leer contactoNecesario
		
		Escribir "¿Lo atrajo la publicidad? (Escriba 0 si no lo atrajo y 1 si lo atrajo):"
		Leer atrajoPublicidad
		
		si ( atrajoPublicidad = 1) Entonces
			Escribir "Indique que tanto lo atrajo la publicidad para determinar estudiar por la universidad en la escala del 1 al 5 donde 1 poco atractiva y 5 muy atractiva:"
			Leer determinarEstudiar
			
		FinSi
		
		Escribir "¿Considera que fue afectado por publicidad engañosa? (Escriba 0 si fue afectado y 1 si no fue afectado):"
		Leer publicidadEnganosa

		calcularIndicadorP <- (conteniaDifusion*20 + contactoNecesario*20 + determinarEstudiar*20 + publicidadEnganosa*40)/100
		Escribir "El indicador de calidad en publicidad es : ", calcularIndicadorP
		si(calcularIndicadorP >= 1.5) Entonces
			Escribir "Resultado: Excelente"
		SiNo
			si (calcularIndicadorP > 1) Entonces
				Escribir "Resultado: Intermedio"
			SiNo
				si (calcularIndicadorP <1) Entonces
					Escribir "Resultado: Deficiente"
				FinSi
			FinSi
		FinSi
		
	SiNo
		si(opcionEvaluar = 'I') Entonces
			
			Escribir "¿Considera que la pagina tiene toda la informacion del proceso: (0 no contiene, 1 si contiene): "
			Leer infoPagina
			si ( infoPagina = 1) Entonces
				Escribir "Ingrese el nivel de contenido de la informacion en la web en la escala del 1 al 5(1 poca informacion, 5 toda la informacion):"
				Leer contedioInfo
			FinSi
			
			Escribir "¿Entendio el proceso sin realizar preguntas a algun asesor? (0 no entiendo, 1 si entendio):"
			Leer preguntaAsesor
			Escribir "¿Considera que la informacion difundida es suficiente?(0 no considera, 1 si considera)"
			Leer infoSuficiente
			
			calcularIndicadorI <- (contedioInfo*30 + preguntaAsesor*30 + infoSuficiente*40)/100
			Escribir "El indicador de calidad en claridad de la informacion es : ", calcularIndicadorI
			
			si(calcularIndicadorI >= 1.8) Entonces
				Escribir "Resultado: Excelente"
			SiNo
				si (calcularIndicadorI > 1) Entonces
					Escribir "Resultado: Intermedio"
				SiNo
					si (calcularIndicadorI <1) Entonces
						Escribir "Resultado: Deficiente"
					FinSi
				FinSi
			FinSi
			
		SiNo
			si(opcionEvaluar = 'R') Entonces
				Escribir "¿Subio sus documentos con facilidad al sistema?(0 sin facilidad, 1 con facilidad)"
				Leer facilidadDocs
				
				Escribir "¿Se subieron rapido los docs?(0 no fue rapido. 1 fue rapido):"
				Leer rapidezDocs
				si(rapidezDocs = 1) Entonces
					Escribir "Indique que tan rapido se subieron los docs del 1 al 5 (1 poco rapido, 5 muy rapido):"
					Leer rapidez
				FinSi
				
				
				Escribir "Considera que el personal de la Univerdidad esta preparado para la validaciopn de los documentos (0 no esta, 1 si esta preparado):"
				Leer personalPreparado
				
				calcularIndicadorR <- (facilidadDocs*25 + rapidez*25 + personalPreparado*50)/100
				Escribir "El indicador de calidad en rapidez en la validacion de docs es : ", calcularIndicadorR
				
				si(calcularIndicadorR >= 1.7) Entonces
					Escribir "Resultado: Excelente"
				SiNo
					si (calcularIndicadorR > 1.2) Entonces
						Escribir "Resultado: Intermedio"
					SiNo
						si (calcularIndicadorR <=1.2) Entonces
							Escribir "Resultado: Deficiente"
						FinSi
					FinSi
				FinSi
				
			SiNo
				Escribir "Ha ingresado una opcion invalida"
			FinSi
		FinSi
	FinSi
FinAlgoritmo
