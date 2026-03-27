//pedir una hora (0-23) y decir su es "AM" o "PM"

var hora = Number(prompt("Ingrese la hora sea (0-23):"))

if (hora >= 0 && hora < 12){
    alert("La hora es AM")
}else if (hora >=12 && hora < 24){
    alert("La hora es PM")
}else {
    alert("No ingresaste una hora valida")
}