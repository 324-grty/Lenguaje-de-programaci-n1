//​Pedir dos notas; si al menos una es mayor a 90, decir "Becado".

var nota1 = Number(prompt("Ingrese la primera nota: "))
var nota2 = Number(prompt("Ingrese la segunda nota: "))

if (nota1 >= 90 || nota2 >= 90){
    //|| es el operador logico OR, se cumple si al menos una
    //de las condiciones es verdadera
    alert("Becado")
}else {
    alert("No es becado")
}