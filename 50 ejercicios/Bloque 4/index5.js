//​Pedir un número de mes y decir si tiene 31 días.

var mes = Number(prompt("Ingrese un numero de mes: "))

if (mes === 1 || mes === 3 || mes === 5 || mes === 7 || mes === 8 || mes === 10 || mes === 12){
    //|| es el operador logico OR, se cumple si al menos una
    //de las condiciones es verdadera
    alert("El mes tiene 31 dias")
}else if (mes === 2){
    alert("El mes tiene 28 o 29 dias")
}else if (mes === 4){
    alert("El mes tiene 30 dias")
}else if (mes === 6){
    alert("El mes tiene 30 dias")
}else if (mes === 9){
    alert("El mes tiene 30 dias")
}else if (mes === 11){
    alert("El mes tiene 30 dias")
}else{
    alert("El mes no tiene 31 dias")
}