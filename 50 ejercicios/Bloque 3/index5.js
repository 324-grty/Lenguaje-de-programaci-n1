//​Pedir un color y decir si es un 
//color primario (rojo, amarillo o azul).

var color = prompt("Ingrese un color para saber si es primario: ")

if (color === "rojo" || color === "amarillo" || color === "azul"){
    alert("Es un color primario")
}else {
    alert("No es un color primario")
}