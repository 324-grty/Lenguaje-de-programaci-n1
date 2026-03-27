//​Pedir al usuario si quiere salir 
//(si/no); si dice "si", decir "Adiós".

var salir = prompt("¿Quieres salir (si/no)?: ").toLowerCase()

if (salir === "si"){
    alert("Adios")
}else  if (salir === "no"){
    alert("No quieres salir")
}else{
    alert("Opcion invalida")
}