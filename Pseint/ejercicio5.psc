Algoritmo estadisticas_alumnos_alternativo
    Definir nota, suma, promedio Como Real;
    Definir aprobados, reprobados Como Entero;
    suma <- 0;
    aprobados <- 0;
    reprobados <- 0;
	
    Para i <- 1 Hasta 8 Con Paso 1 Hacer
	Escribir "Ingrese la nota del estudiante ", i, ":";
	Leer nota;
	suma <- suma + nota;
	Si nota >= 70 Entonces
	aprobados <- aprobados + 1;
	Sino
	reprobados <- reprobados + 1;
	Fin Si
    Fin Para
	
    promedio <- suma / 8;
	
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
FinAlgoritmo
