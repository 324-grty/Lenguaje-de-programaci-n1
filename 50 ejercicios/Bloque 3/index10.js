//​Pedir un número y ver si no es igual a 10.

var numero = Number(prompt("Ingrese un numero a evaluar: "))
//Number() convierte el valor ingresado a un numero, si no se
// puede convertir, devuelve NaN (Not a Number)

if (numero !== 10){
    //!== es el operador logico de desigualdad, se cumple si 
    //los valores son diferentes
    alert("El numero no es igual a 10")
}else{
    alert("El numero es igual a 10")
}