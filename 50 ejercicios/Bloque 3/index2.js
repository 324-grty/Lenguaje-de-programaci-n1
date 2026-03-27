//​Pedir edad y si tiene licencia (si/no); si es mayor de 
//18 y tiene licencia, puede conducir.

var edad = prompt("Ingrese su edad: ")
var tiene_licencia = prompt("Tiene licencia (si/no): ")

if (edad >= 18 && tiene_licencia === "si"){
    alert("Puede conducir")
}else {
    alert("No puede conducir")
}