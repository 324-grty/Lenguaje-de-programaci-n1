//​Pedir al usuario un animal; si es "Perro" o "Gato", 
// decir "Mascota común".

var animal = prompt("Ingrese el nombre de un animal: ").toLowerCase()
//toLowerCase() convierte el texto a minúsculas, esto ayuda a que la 
//comparación no sea sensible a mayúsculas o minúsculas

if (animal === "perro" || animal === "gato"){
    alert("Mascota común")
}else{
    alert("No es una mascota común")
}
