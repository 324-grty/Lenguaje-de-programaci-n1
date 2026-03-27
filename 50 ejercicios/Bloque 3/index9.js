//​Pedir la edad; si es menor a 5 o 
//mayor a 65, decir "Entrada gratis".

var edad = Number(prompt("Ingrese su edad: "))
//Number() convierte el valor ingresado a un numero, si no se
// puede convertir, devuelve NaN (Not a Number)

if (edad <=5 || edad >= 65){
    //|| es el operador logico OR, se cumple si al menos una
    //de las condiciones es verdadera
    alert("Entrada gratis")
}else {
    alert("Debe pagar la entrada")
}