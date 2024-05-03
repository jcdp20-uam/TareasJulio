Algoritmo suma_naturales
    Definir n, suma, i Como Entero;
    Escribir "Ingresa un numero natural:";
    Leer n;
    suma <- 0;
    Para i <- 1 Hasta n Con Paso 1 Hacer;
	suma <- suma + i;
    FinPara
    Escribir "La suma de los números naturales desde 1 hasta ", n, " es: ", suma;
FinAlgoritmo
