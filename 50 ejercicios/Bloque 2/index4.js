//pedir la clasificacion (0-100) y decir si aprobo (70 o mas)

var calificacion = Number(prompt("Ingrese la calificacion: "))
//Number es un tipo de dato que convierte el 
// valor ingresado en un numero

if (calificacion >=70){
    alert("Sos cabron: Aprobado")
}else {
    alert("No sos cabron: Reprobado")
}