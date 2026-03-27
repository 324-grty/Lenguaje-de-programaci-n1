//​Pedir un número; si es mayor a 1000, restarle 100 y
//mostrar el resultado.

var numero = Number(prompt("Ingrese un numero: "))
//Number() convierte el valor ingresado a un numero, si no se
//puede convertir, el resultado es NaN (Not a Number)

if (numero >= 1000){
    alert("El reulto es: " + (numero - 100))
}else{
    alert("El número no es mayor a 1000")
}