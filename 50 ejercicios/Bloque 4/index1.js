//​Juego de adivinar: Pedir un número, si es 7, decir "Ganaste".

var numero = Number(prompt("Ingrese un numero: "))
//Number() convierte el valor ingresado a un numero, si no se
//puede convertir, el resultado es NaN (Not a Number)

if (numero ===7){
    alert("Ganaste")
}else{
    alert("Perdiste")
}