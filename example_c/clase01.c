#include<stdio.h>
#include<stdlib.h>

// Globales
typedef struct {
    char edad;
    float estatura;
    char nombre[50];
    int tel;
} empleado;

int main() {
    empleado docentes [20];
    
    empleado docente;
    docente.edad = 27;
    docente.estatura = 1.70;
    memcpy(docente.nombre, "Dilan", sizeof("Dilan"));
    docente.tel = 311301;
    printf("Nombre: %s \nEdad: %d\nEstatura: %.2f m \n", docente.nombre, docente.edad, docente.estatura);
    return 0;
}






// typedef struct {
//     int suma;
//     int resta;
//     int mult;
//     float div;
// } operations