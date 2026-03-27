//​Pedir al usuario que elija 1 o 2; mostrar un 
//camino diferente para cada uno.
var opcion = Number(prompt("¿Elige el camino 1, 2?: "))
//Number() convierte el valor ingresado a un numero, si no se
//puede convertir, el resultado es NaN (Not a Number)

if (opcion === 1 ){
    alert("Elegiste el camino 1")
}else if (opcion === 2 ){
    alert("Elegiste el camino 2")
}else{
    alert("Opcion invalida")
}