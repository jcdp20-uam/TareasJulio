Algoritmo promedio_seccion_alternativo
    Definir suma, nota, promedio Como Real;
    suma <- 0;
    Para i <- 1 Hasta 10 Con Paso 1 Hacer;
	Escribir "Ingrese la nota del estudiante ", i, ":";
	Leer nota;
	suma <- suma + nota;
    Fin Para
    promedio <- suma / 10;
    Escribir "El promedio general de la sección es: ", promedio;
FinAlgoritmo
