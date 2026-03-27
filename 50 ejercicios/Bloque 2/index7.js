//pedir un numero y decir si esta entre 10 y 20 (inclusive)

var numero = Number(prompt("Ingrese un numero: "))
//Number es un tipo de dato que convierte el 
//valor ingresado en un numero

if (numero >=10 && numero <=20){ //&& es el operador logico AND, 
// se cumple si ambas condiciones son verdaderas
    alert("El numero esta entre 10 y 20")
}else{
    alert("El numero no esta entre 10 y 20")
}