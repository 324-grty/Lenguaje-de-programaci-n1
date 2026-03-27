//​Pedir un número y decir si es positivo y par.

var numero = prompt("Ingrese un numero: ")

if (numero > 0 && numero %2 === 0){
    //% es el resto de la división de numero entre 2
    //&& es el operador logico AND, se cumple si 
    // ambas condiciones son verdaderas
    alert("El numero es positivo y es par")
}else {
    alert("El numero no es positivo y no es par")
}