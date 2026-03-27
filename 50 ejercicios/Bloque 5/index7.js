//​Pedir un número y decir si es raíz 
//cuadrada exacta de otro (ej. 4 y 16).

var numero = Number(prompt("Ingrese un numero: "))
//Number() convierte el valor ingresado a un numero, si no se
//puede convertir, el resultado es NaN (Not a Number)

if (numero === Math.sqrt(numero) * Math.sqrt(numero)){
//Math.sqrt() devuelve la raíz cuadrada de un número
//Math.sqrt(numero) * Math.sqrt(numero) devuelve la raíz 
//cuadrada de numero * numero}

    alert("Es raiz cuadrada exacta")
}else{
    alert("No es raiz cuadrada exacta")
}