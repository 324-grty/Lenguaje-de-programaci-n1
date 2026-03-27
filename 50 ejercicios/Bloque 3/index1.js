//pedir usuario y contraseña; si ambos son correctos 
//imprimir "login exitoso"

var usuario = prompt("Ingrese su usario: ")
var contraseña = prompt("Ingrese su contraseña: ")

if (usuario === "admin" && contraseña === "12345"){
    alert("Login exitoso")
}else{
    alert("Usuario o contraseña incorrecta")
}