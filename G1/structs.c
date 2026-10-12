#include <stdio.h>

/* Tres ejemplos de struct */
struct Punto {
    int x;
    int y;
};

struct Persona {
    char nombre[30];
    int edad;
};

struct Producto {
    char nombre[40];
    float precio;
    int stock;
};

/* Tres ejemplos de typedef */
typedef unsigned int Edad;
typedef float Vector3[3];

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

int main(void) {
    struct Punto punto = {3, 5};
    struct Persona persona = {"Ana", 25};
    struct Producto producto = {"Cuaderno", 2.50f, 10};

    Edad edad = 25;
    Vector3 posicion = {1.0f, 2.0f, 3.0f};
    Fecha fecha = {1, 1, 2000};

    printf("Punto: x = %d, y = %d\n", punto.x, punto.y);
    printf("Persona: %s, %d años\n", persona.nombre, persona.edad);
    printf("Producto: %s, precio %.2f, stock %d\n",
           producto.nombre, producto.precio, producto.stock);

    printf("Edad (typedef): %u\n", edad);
    printf("Vector3: %.1f, %.1f, %.1f\n",
           posicion[0], posicion[1], posicion[2]);
    printf("Fecha: %d/%d/%d\n", fecha.dia, fecha.mes, fecha.anio);

    return 0;
}

