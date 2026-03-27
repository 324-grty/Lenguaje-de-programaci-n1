//pedir la estatura en cm y decir si es una persona alta 
//mas de 180 cm

var estatura = Number(prompt("Ingrese su estatura en cm: "))
//Number es un tipo de dato que convierte el 
// valor ingresado en un numero

if (estatura >=180){
    alert("Eres una persona alta")
}else{
    alert("Eres una persona baja")
}