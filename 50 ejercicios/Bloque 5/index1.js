//​Pedir una letra; decir si es vocal.

var letra = prompt("Ingrese una letra: ").toLowerCase()
//toLowerCase() convierte el texto a minúsculas, esto ayuda a que la 
//comparación no sea sensible a mayúsculas o minúsculas

if (letra === "a" || letra === "e" || letra === "i" || letra === "o" || letra === "u"){
    alert("Es vocal")
}else{
    alert("No es vocal")
}