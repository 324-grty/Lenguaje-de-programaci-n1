//​Pedir un número y decir si tiene una sola cifra (0 al 9).

var numero = Number(prompt("Ingrese un numero: "))

if (numero >=0 && numero <=9){
    //&& es el operador logico AND, 
    //se cumple si ambas condiciones son verdaderas
    alert("El numero tiene una sola cifra")
}else if (numero >= 10 && numero <=99){
    alert("El numero tiene dos cifras")
}else{
    alert("El numero tiene tres o mas cifras")
}