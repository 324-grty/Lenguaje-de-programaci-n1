//​Pedir cuánto dinero tiene; si le alcanza para 
// un café de $5, decir "Compra realizada".

var dinero = Number(prompt("¿Cuanto dinero tienes?: "))
//Number() convierte el valor ingresado a un numero, si no se
//puede convertir, el resultado es NaN (Not a Number)
if (dinero >= 5){
    alert("Compra realizada")
}else{
    alert("No te alcanza para un cafe")
}