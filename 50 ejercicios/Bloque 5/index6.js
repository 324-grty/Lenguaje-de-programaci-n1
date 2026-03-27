//​Pedir dos palabras y decir si son idénticas.

var palabra1 = prompt("Ingrese la primera palabra: ").toLowerCase()
//toLowerCase() convierte el texto a minúsculas, esto ayuda a que la 
//comparación no sea sensible a mayúsculas o minúsculas
var palabra2 = prompt("Ingrese la segunda palabra: ").toLowerCase()

if (palabra1 === palabra2){
    alert("Las palabras son identicas")
}else{
    alert("Las palabras son diferentes")
}