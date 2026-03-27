//​Pedir el día y el mes; si es 25 y 12, decir "¡Feliz Navidad!".

var dia = Number(prompt("Ingrese el dia: "))
//Number() convierte el valor ingresado a un numero, si no se 
// puede convertir, devuelve NaN (Not a Number)

var mes =Number(prompt("Ingrese el mes: "))

if (dia === 25 && mes === 12){
    alert("¡Feliz Navidad!");
}else{
    alert("No es Navidad");
}