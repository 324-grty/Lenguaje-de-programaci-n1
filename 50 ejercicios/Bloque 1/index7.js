//pedir un numero y decir si es par (usando %2 ===0)

var numero = prompt("Ingrese un numero: ")

if (numero %2 ===0){ // %2 es el resto de la división de numero entre 2
    alert("El numero es par ")
} else {
    alert("El numero no es par")
}