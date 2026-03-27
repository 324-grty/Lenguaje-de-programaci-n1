//​Pedir una contraseña; si tiene menos de 6 
//caracteres, decir "Muy corta".

var contraseña = prompt("Ingrese una contraseña: ")

if (contraseña.length <=6){
//.length devuelve la longitud de un string
    alert("La contraseña es muy corta")
}else{
    alert("La contraseña es larga, es perfecta")
}