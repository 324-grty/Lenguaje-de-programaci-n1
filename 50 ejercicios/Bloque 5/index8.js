//​Pedir al usuario su género (M/F) y edad; saludar según 
// corresponda (Ej: "Bienvenido joven").

var genero = prompt("¿Es usted (M/F)?: ").toLowerCase()
var edad = Number(prompt("¿Cuantos años tiene usted?: "))

if (genero === "m"){
    if (edad <= 17){
        alert("Bienvenido joven")
    } else {
        alert("Bienvenido señor")
    }
} else if (genero === "f"){
    if (edad <= 17){
        alert("Bienvenida jovencita")
    } else {
        alert("Bienvenida señora")
    }
} else {
    alert("Opción inválida")
}