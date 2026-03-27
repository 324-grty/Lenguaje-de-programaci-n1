//pedir dos numeros y decir si el primero es divisible por el segundo numero

var numero1 = Number(prompt("Ingrese primer numero: "))
var numero2 = Number(prompt("Ingrese segundo numero: "))

if (numero1 % numero2 === 0){ // % es el resto de la división de numero1 entre numero2
    alert("El numero " + numero1 + " es divisible por " + numero2)
}else {
    alert("El numero " + numero1 + " no es divisible por " + numero2
    )
}