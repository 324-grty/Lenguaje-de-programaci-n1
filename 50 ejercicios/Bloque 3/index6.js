//​Pedir un número y decir si es menor a 0 o mayor a 100.

var numero = Number(prompt("Ingrese un numero: "));

if (numero <= 0 || numero >= 100){
    //|| es el operador logico OR, se cumple si al menos una
    //de las condiciones es verdadera
    alert("El numero es menor a 0 o mayor a 100");
} else {
    alert("El numero está entre 0 y 100");
}