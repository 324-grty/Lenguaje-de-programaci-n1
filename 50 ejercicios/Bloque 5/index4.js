//​Pedir el sueldo; si es menor a 500, sumarle un bono de 50.

var sueldo = Number(prompt("Ingrese su sueldo: "))
//Number() convierte el valor ingresado a un numero, si no se
//puede convertir, el resultado es NaN (Not a Number)

if (sueldo <= 500){
    alert("Su sueldo es: " + (sueldo + 50))
}else{
    alert("Su sueldo no es menor a 500")
}