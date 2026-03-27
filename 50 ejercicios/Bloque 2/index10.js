//pedir un nombre y si es "Admin", dar la bienvenida

var nombre = prompt("Ingrese su nombre: ").trim().toLowerCase()
//trim elimina espacios en blanco al inicio y al final
//toLowerCase convierte el texto a minúsculas

if (nombre === "admin"){
    alert("Bienvenido Admin");
} else {
    alert("No eres Admin");
}