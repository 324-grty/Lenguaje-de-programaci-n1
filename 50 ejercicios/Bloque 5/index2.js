//​Pedir una palabra; decir si es "Larga" (más de 10 caracteres).

var palabra = prompt("Ingrese una palabra: ")

if (palabra.length >= 10){
    //.length devuelve la longitud de un string
    alert("La paraba es larga")
}else{
    alert("La palabra es corta")
}