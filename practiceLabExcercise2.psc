Algoritmo mediciones_Crecimiento
	Escribir 'Ingrese si se evaluara a niños(H) o niñas(M) :'
	Leer genero
	Si (genero='H') Entonces
		Escribir 'Ingrese M si el niño tiene meses o A si tiene años: '
		Leer Edad_unidad
		Si (Edad_unidad='M') Entonces
			Escribir 'Ingrese la cantidad de meses: '
			Leer EdadMeses
			Si (EdadMeses=3) Entonces
				PesoMedio <- 6.2
				Talla_media <- 60
				PerimetroCraneal <- 41.2
			SiNo
				Si (EdadMeses6) Entonces
					PesoMedio <- 8
					Talla_media <- 67
					PerimetroCraneal <- 44
				SiNo
					Si (EdadMeses=9) Entonces
						PesoMedio <- 9.2
						Talla_media <- 72
						PerimetroCraneal <- 46
					SiNo
						Si (EdadMeses=0) Entonces
							PesoMedio <- 3.4
							Talla_media <- 50.3
							PerimetroCraneal <- 34.8
						FinSi
					FinSi
				FinSi
			FinSi
			Escribir 'El niño debe tener como peso medio ', PesoMedio, ' Kg, como altura', Talla_media, 'cm y como perimetro craneal ', PerimetroCraneal, ' para la edad ingresada'
		SiNo
			Si (Edad_unidad='A') Entonces
				Escribir 'Ingrese la cantidad de años: '
				Leer EdadAnos
				Si (EdadAnos=1) Entonces
					PesoMedio <- 10.2
					Talla_media <- 76
					PerimetroCraneal <- 47.3
				FinSi
				Escribir "El niño debe tener como peso medio ", PesoMedio, " Kg, como altura", Talla_media, " cm y como perimetro craneal ", PerimetroCraneal, " para la edad ingresada"
			SiNo
				Escribir 'Debe ingresar una opcion valida para la edad '
			FinSi
		FinSi
	SiNo
		Si (genero='M') Entonces
			Escribir 'Ingrese M si la niña tiene meses o A si tiene años: '
			Leer Edad_unidad
			Si (Edad_unidad='M') Entonces
				
				Escribir 'Ingrese la cantidad de meses: '
				Leer EdadMeses
				
				Si (EdadMeses3) Entonces
					PesoMedio <- 5.6
					Talla_media <- 59
					PerimetroCraneal <- 40
				SiNo
					Si (EdadMeses=6) Entonces
						PesoMedio <- 7.3
						Talla_media <- 65
						PerimetroCraneal <- 42.8
					SiNo
						Si (EdadMeses=9) Entonces
							PesoMedio <- 8.6
							Talla_media <- 70
							PerimetroCraneal <- 44.7
						SiNo
							Si (EdadMeses=0) Entonces
								PesoMedio <- 3.4
								Talla_media <- 50.3
								PerimetroCraneal <- 34.1
							FinSi
						FinSi
					FinSi
				FinSi
				Escribir 'La niña debe tener como peso medio ', PesoMedio, ' Kg, como altura', Talla_media, 'cm y como perimetro craneal ', PerimetroCraneal, ' para la edad ingresada'
			SiNo
				Si (Edad_unidad='A') Entonces
					Escribir 'Ingrese la cantidad de años: '
					Leer EdadAnos
					Si (EdadAnos=1) Entonces
						PesoMedio <- 9.5
						Talla_media <- 74
						PerimetroCraneal <- 46
					FinSi
					Escribir 'La niña debe tener como peso medio ', PesoMedio, ' Kg, como altura ', Talla_media, 'cm y como perimetro craneal ', PerimetroCraneal, ' para la edad ingresada'
				SiNo
					Escribir 'Debe ingresar una opcion valida para la edad'
				FinSi
			FinSi
		SiNo
			Escribir 'Debe ingresar una opcion valida para el genero'
		FinSi
	FinSi
	
	Escribir "Ingrese el peso del niño o niña en kg: "
	Leer Peso
	Escribir "Ingrese la talla del niño o niña en kg: "
	Leer Altura
	
	si (Peso < PesoMedio) Entonces
		Escribir " El peso es menor que el peso medio que debe tener "
	SiNo
		Escribir "El peso es mayor que el peso medio que debe tener"
	FinSi
	
	si (Altura < Talla_media) Entonces
		Escribir "La talla es menor que el peso medio que debe tener "
	SiNo
		Escribir "La talla es mayor que el peso medio que debe tener"
	FinSi
FinAlgoritmo
