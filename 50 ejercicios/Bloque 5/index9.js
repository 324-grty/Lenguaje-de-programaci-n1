//​Pedir un número; si es múltiplo 
//de 3 y de 5 a la vez (FizzBuzz básico).

var numero =Number(prompt("Ingrese un numero: "))
//Number() convierte el valor ingresado a un numero, si no se 
//puede ocnvertir, el resultado es NaN (Not a Number)

if (numero % 3 === 0 && numero % 5 === 0){
    alert("FizzBuzz")
}else if (numero % 3 === 0){
    alert("Fizz")
}else if (numero % 5 === 0){
    alert("Buzz")
}else{
    alert("No es FizzBuzz")
}
